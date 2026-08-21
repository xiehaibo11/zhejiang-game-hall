.class Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer$1;
.super Ljava/lang/Object;
.source "RegWebViewMethodMaganer.java"

# interfaces
.implements Lcom/github/lzyzsd/jsbridge/BridgeHandler;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer;->payActionFromWeb()V
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

    .line 57
    iput-object p1, p0, Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer$1;->this$0:Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public handler(Ljava/lang/String;Lcom/github/lzyzsd/jsbridge/CallBackFunction;)V
    .locals 2

    .line 60
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getLogger()Lcom/bianfeng/utilslib/Logger;

    move-result-object p2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "payActionFromWeb---"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, v0}, Lcom/bianfeng/utilslib/Logger;->i(Ljava/lang/String;)I

    .line 61
    iget-object p2, p0, Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer$1;->this$0:Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer;

    invoke-static {p2}, Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer;->access$000(Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer;)Landroid/app/Activity;

    move-result-object p2

    if-eqz p2, :cond_0

    .line 62
    invoke-static {}, Lcom/bianfeng/splitscreenwindow/SplitScreenSdk;->getInstance()Lcom/bianfeng/splitscreenwindow/SplitScreenSdk;

    move-result-object p2

    invoke-virtual {p2, p1}, Lcom/bianfeng/splitscreenwindow/SplitScreenSdk;->payWeb(Ljava/lang/String;)V

    goto :goto_0

    .line 64
    :cond_0
    iget-object p1, p0, Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer$1;->this$0:Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer;

    invoke-static {p1}, Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer;->access$100(Lcom/bianfeng/splitscreenwindow/ui/RegWebViewMethodMaganer;)Landroid/app/Activity;

    move-result-object p1

    const/4 p2, 0x1

    const-string v0, "\u7f51\u7edc\u65ad\u5f00\uff0c\u8bf7\u91cd\u65b0\u542f\u52a8\u6e38\u620f~"

    invoke-static {p1, v0, p2}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    move-result-object p1

    invoke-virtual {p1}, Landroid/widget/Toast;->show()V

    :goto_0
    return-void
.end method
