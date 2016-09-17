#ifndef CATERPILLARAPP_H
#define CATERPILLARAPP_H

#include "MooseApp.h"

class CaterpillarApp;

template<>
InputParameters validParams<CaterpillarApp>();

class CaterpillarApp : public MooseApp
{
public:
  CaterpillarApp(InputParameters parameters);
  virtual ~CaterpillarApp();

  static void registerApps();
  static void registerObjects(Factory & factory);
  static void associateSyntax(Syntax & syntax, ActionFactory & action_factory);
};

#endif /* CATERPILLARAPP_H */
