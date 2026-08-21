.class Lcom/bianfeng/roomlib/ui/RegWebViewMethodMaganer$5;
.super Ljava/lang/Object;
.source "RegWebViewMethodMaganer.java"

# interfaces
.implements Lcom/github/lzyzsd/jsbridge/BridgeHandler;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/roomlib/ui/RegWebViewMethodMaganer;->copyContentToClipboard()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/roomlib/ui/RegWebViewMethodMaganer;


# direct methods
.method constructor <init>(Lcom/bianfeng/roomlib/ui/RegWebViewMethodMaganer;)V
    .locals 0

    .line 153
    iput-object p1, p0, Lcom/bianfeng/roomlib/ui/RegWebViewMethodMaganer$5;->this$0:Lcom/bianfeng/roomlib/ui/RegWebViewMethodMaganer;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public handler(Ljava/lang/String;Lcom/github/lzyzsd/jsbridge/CallBackFunction;)V
    .locals 2

    .line 157
    iget-object p2, p0, Lcom/bianfeng/roomlib/ui/RegWebViewMethodMaganer$5;->this$0:Lcom/bianfeng/roomlib/ui/RegWebViewMethodMaganer;

    invoke-static {p2}, Lcom/bianfeng/roomlib/ui/RegWebViewMethodMaganer;->access$000(Lcom/bianfeng/roomlib/ui/RegWebViewMethodMaganer;)Landroid/app/Activity;

    move-result-object p2

    const-string v0, "clipboard"

    invoke-virtual {p2, v0}, Landroid/app/Activity;->getSystemService(Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, Landroid/content/ClipboardManager;

    const-string v0, "Label"

    .line 159
    invoke-static {v0, p1}, Landroid/content/ClipData;->newPlainText(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Landroid/content/ClipData;

    move-result-object v0

    .line 161
    invoke-virtual {p2, v0}, Landroid/content/ClipboardManager;->setPrimaryClip(Landroid/content/ClipData;)V

    .line 162
    invoke-static {}, Lcom/bianfeng/utilslib/UtilsSdk;->getLogger()Lcom/bianfeng/utilslib/Logger;

    move-result-object p2

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "copyContentToClipboard\uff1aroom "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p2, p1}, Lcom/bianfeng/utilslib/Logger;->i(Ljava/lang/String;)I

    return-void
.end method
