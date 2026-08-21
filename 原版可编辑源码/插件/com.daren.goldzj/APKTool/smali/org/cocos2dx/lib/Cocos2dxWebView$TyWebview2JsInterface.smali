.class public Lorg/cocos2dx/lib/Cocos2dxWebView$TyWebview2JsInterface;
.super Ljava/lang/Object;
.source "Cocos2dxWebView.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lorg/cocos2dx/lib/Cocos2dxWebView;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x1
    name = "TyWebview2JsInterface"
.end annotation


# instance fields
.field final synthetic this$0:Lorg/cocos2dx/lib/Cocos2dxWebView;


# direct methods
.method public constructor <init>(Lorg/cocos2dx/lib/Cocos2dxWebView;)V
    .locals 0

    .line 75
    iput-object p1, p0, Lorg/cocos2dx/lib/Cocos2dxWebView$TyWebview2JsInterface;->this$0:Lorg/cocos2dx/lib/Cocos2dxWebView;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public CallNativeJSFunction(ILjava/lang/String;)V
    .locals 1
    .annotation runtime Landroid/webkit/JavascriptInterface;
    .end annotation

    .line 81
    invoke-static {}, Lorg/cocos2dx/lib/Cocos2dxActivity;->getContext()Landroid/content/Context;

    move-result-object v0

    check-cast v0, Lorg/cocos2dx/lib/Cocos2dxActivity;

    invoke-virtual {v0, p1, p2}, Lorg/cocos2dx/lib/Cocos2dxActivity;->CallJSFuncByEvent(ILjava/lang/String;)V

    return-void
.end method
