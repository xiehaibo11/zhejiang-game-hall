.class Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer$10;
.super Ljava/lang/Object;
.source "RegWebViewMethodMaganer.java"

# interfaces
.implements Lcom/github/lzyzsd/jsbridge/BridgeHandler;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer;->getVersion()V
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

    .line 157
    iput-object p1, p0, Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer$10;->this$0:Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public handler(Ljava/lang/String;Lcom/github/lzyzsd/jsbridge/CallBackFunction;)V
    .locals 3

    .line 160
    invoke-static {}, Lcom/bianfeng/utilslib/AppConfigUtils;->getInstance()Lcom/bianfeng/utilslib/AppConfigUtils;

    move-result-object p1

    invoke-virtual {p1}, Lcom/bianfeng/utilslib/AppConfigUtils;->getSdkVersion()Ljava/lang/String;

    move-result-object p1

    .line 161
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getLogger()Lcom/bianfeng/utilslib/Logger;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "\u83b7\u53d6\u7248\u672c\u53f7"

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/bianfeng/utilslib/Logger;->i(Ljava/lang/String;)I

    .line 162
    invoke-interface {p2, p1}, Lcom/github/lzyzsd/jsbridge/CallBackFunction;->onCallBack(Ljava/lang/String;)V

    return-void
.end method
