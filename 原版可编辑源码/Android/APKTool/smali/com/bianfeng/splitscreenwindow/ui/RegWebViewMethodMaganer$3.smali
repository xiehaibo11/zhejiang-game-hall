.class Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer$3;
.super Ljava/lang/Object;
.source "RegWebViewMethodMaganer.java"

# interfaces
.implements Lcom/github/lzyzsd/jsbridge/BridgeHandler;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer;->closeH5Game()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer;


# direct methods
.method constructor <init>(Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer;)V
    .locals 0

    .line 80
    iput-object p1, p0, Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer$3;->this$0:Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public handler(Ljava/lang/String;Lcom/github/lzyzsd/jsbridge/CallBackFunction;)V
    .locals 1

    .line 83
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getReflexCall()Lcom/bianfeng/utilslib/reflex/ReflexCallbackUtils;

    move-result-object p1

    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getClassNameSet()Lcom/bianfeng/utilslib/reflex/ClassNameSetUtils;

    move-result-object p2

    invoke-virtual {p2}, Lcom/bianfeng/utilslib/reflex/ClassNameSetUtils;->getLoginCallback()Ljava/lang/String;

    move-result-object p2

    const-string v0, "GameClose"

    invoke-virtual {p1, p2, v0}, Lcom/bianfeng/utilslib/reflex/ReflexCallbackUtils;->onCallWithHashmap(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;

    .line 84
    iget-object p1, p0, Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer$3;->this$0:Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer;

    invoke-static {p1}, Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer;->access$100(Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer;)Landroid/app/Activity;

    move-result-object p1

    invoke-virtual {p1}, Landroid/app/Activity;->finish()V

    return-void
.end method
