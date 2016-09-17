#include "CaterpillarApp.h"
#include "Moose.h"
#include "AppFactory.h"
#include "ModulesApp.h"
#include "MooseSyntax.h"

template<>
InputParameters validParams<CaterpillarApp>()
{
  InputParameters params = validParams<MooseApp>();

  params.set<bool>("use_legacy_uo_initialization") = false;
  params.set<bool>("use_legacy_uo_aux_computation") = false;
  params.set<bool>("use_legacy_output_syntax") = false;

  return params;
}

CaterpillarApp::CaterpillarApp(InputParameters parameters) :
    MooseApp(parameters)
{
  Moose::registerObjects(_factory);
  ModulesApp::registerObjects(_factory);
  CaterpillarApp::registerObjects(_factory);

  Moose::associateSyntax(_syntax, _action_factory);
  ModulesApp::associateSyntax(_syntax, _action_factory);
  CaterpillarApp::associateSyntax(_syntax, _action_factory);
}

CaterpillarApp::~CaterpillarApp()
{
}

// External entry point for dynamic application loading
extern "C" void CaterpillarApp__registerApps() { CaterpillarApp::registerApps(); }
void
CaterpillarApp::registerApps()
{
  registerApp(CaterpillarApp);
}

// External entry point for dynamic object registration
extern "C" void CaterpillarApp__registerObjects(Factory & factory) { CaterpillarApp::registerObjects(factory); }
void
CaterpillarApp::registerObjects(Factory & factory)
{
}

// External entry point for dynamic syntax association
extern "C" void CaterpillarApp__associateSyntax(Syntax & syntax, ActionFactory & action_factory) { CaterpillarApp::associateSyntax(syntax, action_factory); }
void
CaterpillarApp::associateSyntax(Syntax & /*syntax*/, ActionFactory & /*action_factory*/)
{
}
