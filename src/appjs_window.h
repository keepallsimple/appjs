#ifndef APPJS_WINDOW_H
#define APPJS_WINDOW_H
#pragma once

#include "appjs.h"
#include "native_window/native_window.h"

namespace appjs {

using namespace v8;

class Window : public node::ObjectWrap {
  DEFINE_OBJECT_FACTORY(Window);
  DEFINE_PROTOTYPE_METHOD(OpenDialog);
  DEFINE_PROTOTYPE_METHOD(OpenDevTools);
  DEFINE_PROTOTYPE_METHOD(CloseDevTools);
  DEFINE_PROTOTYPE_METHOD(Fullscreen);
  DEFINE_PROTOTYPE_METHOD(Minimize);
  DEFINE_PROTOTYPE_METHOD(Maximize);
  DEFINE_PROTOTYPE_METHOD(Restore);
  DEFINE_PROTOTYPE_METHOD(Drag);
  DEFINE_PROTOTYPE_METHOD(Drop);
  DEFINE_PROTOTYPE_METHOD(Show);
  DEFINE_PROTOTYPE_METHOD(Focus);
  DEFINE_PROTOTYPE_METHOD(Hide);
  DEFINE_PROTOTYPE_METHOD(Destroy);
  DEFINE_PROTOTYPE_METHOD(RunInBrowser);
  DEFINE_PROTOTYPE_METHOD(SendSync);
  DEFINE_PROTOTYPE_METHOD(Move);
  DEFINE_PROTOTYPE_METHOD(Resize);
  DEFINE_PROTOTYPE_METHOD(SetIcon);
  DEFINE_INSTANCE_ACCESSOR(Left);
  DEFINE_INSTANCE_ACCESSOR(Top);
  DEFINE_INSTANCE_ACCESSOR(Height);
  DEFINE_INSTANCE_ACCESSOR(Width);
  DEFINE_INSTANCE_ACCESSOR(Title);
  DEFINE_INSTANCE_ACCESSOR(Topmost);
  DEFINE_INSTANCE_ACCESSOR(State);
  DEFINE_INSTANCE_ACCESSOR(Resizable);
  DEFINE_INSTANCE_ACCESSOR(ShowChrome);
  DEFINE_INSTANCE_ACCESSOR(Alpha);
  DEFINE_INSTANCE_ACCESSOR(Opacity);
  DEFINE_INSTANCE_ACCESSOR(AutoResize);
#if defined(__WIN__)
  DEFINE_PROTOTYPE_METHOD(Style);
#endif
};

} /* appjs */
#endif /* end of APPJS_WINDOW_H */

