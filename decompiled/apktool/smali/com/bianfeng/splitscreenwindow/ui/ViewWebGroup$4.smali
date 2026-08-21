.class Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup$4;
.super Ljava/lang/Object;
.source "ViewWebGroup.java"

# interfaces
.implements Lcom/github/lzyzsd/jsbridge/BridgeHandler;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;->registerHandler(Landroid/app/Activity;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;


# direct methods
.method constructor <init>(Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;)V
    .locals 0

    .line 99
    iput-object p1, p0, Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup$4;->this$0:Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public handler(Ljava/lang/String;Lcom/github/lzyzsd/jsbridge/CallBackFunction;)V
    .locals 1

    .line 102
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getSharedPreferences()Lcom/bianfeng/utilslib/SharedPreferencesUtils;

    move-result-object p1

    const-string p2, "enterGame"

    invoke-virtual {p1, p2}, Lcom/bianfeng/utilslib/SharedPreferencesUtils;->getBoolean(Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 104
    iget-object p1, p0, Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup$4;->this$0:Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;

    invoke-static {p1}, Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;->access$100(Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;)Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup$ViewWebInterface;

    move-result-object p1

    invoke-interface {p1}, Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup$ViewWebInterface;->showNotityDailog()V

    goto :goto_0

    .line 106
    :cond_0
    invoke-static {}, Lcom/bianfeng/thridlibrary/ThridSdk;->getYmnDatafun()Lcom/bianfeng/thridlibrary/datafun/YmnDatafunUtils;

    move-result-object p1

    sget p2, Lcom/bianfeng/thridlibrary/datafun/YmnDatafunUtils;->event_h5_finping:I

    invoke-virtual {p1, p2}, Lcom/bianfeng/thridlibrary/datafun/YmnDatafunUtils;->onClickWithH5Fenping(I)V

    .line 107
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getReflexCall()Lcom/bianfeng/utilslib/reflex/ReflexCallbackUtils;

    move-result-object p1

    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getClassNameSet()Lcom/bianfeng/utilslib/reflex/ClassNameSetUtils;

    move-result-object p2

    invoke-virtual {p2}, Lcom/bianfeng/utilslib/reflex/ClassNameSetUtils;->getLoginCallback()Ljava/lang/String;

    move-result-object p2

    const-string v0, "GameClose"

    invoke-virtual {p1, p2, v0}, Lcom/bianfeng/utilslib/reflex/ReflexCallbackUtils;->onCallWithHashmap(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;

    .line 108
    iget-object p1, p0, Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup$4;->this$0:Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;

    invoke-static {p1}, Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;->access$100(Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup;)Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup$ViewWebInterface;

    move-result-object p1

    invoke-interface {p1}, Lcom/bianfeng/splitscreenwindow/ui/ViewWebGroup$ViewWebInterface;->onRemove()V

    :goto_0
    return-void
.end method
