.class Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer$8;
.super Ljava/lang/Object;
.source "RegWebViewMethodMaganer.java"

# interfaces
.implements Lcom/github/lzyzsd/jsbridge/BridgeHandler;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer;->isSupportDownload()V
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

    .line 129
    iput-object p1, p0, Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer$8;->this$0:Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public handler(Ljava/lang/String;Lcom/github/lzyzsd/jsbridge/CallBackFunction;)V
    .locals 1

    .line 132
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getLogger()Lcom/bianfeng/utilslib/Logger;

    move-result-object p1

    const-string v0, "\u662f\u5426\u652f\u6301\u4e0b\u8f7d"

    invoke-virtual {p1, v0}, Lcom/bianfeng/utilslib/Logger;->i(Ljava/lang/String;)I

    const-string p1, "true"

    .line 133
    invoke-interface {p2, p1}, Lcom/github/lzyzsd/jsbridge/CallBackFunction;->onCallBack(Ljava/lang/String;)V

    return-void
.end method
