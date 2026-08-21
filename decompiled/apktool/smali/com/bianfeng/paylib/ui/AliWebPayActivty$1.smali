.class Lcom/bianfeng/paylib/ui/AliWebPayActivty$1;
.super Landroid/webkit/WebViewClient;
.source "AliWebPayActivty.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/paylib/ui/AliWebPayActivty;->initData()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/paylib/ui/AliWebPayActivty;


# direct methods
.method constructor <init>(Lcom/bianfeng/paylib/ui/AliWebPayActivty;)V
    .locals 0

    .line 81
    iput-object p1, p0, Lcom/bianfeng/paylib/ui/AliWebPayActivty$1;->this$0:Lcom/bianfeng/paylib/ui/AliWebPayActivty;

    invoke-direct {p0}, Landroid/webkit/WebViewClient;-><init>()V

    return-void
.end method


# virtual methods
.method public onPageStarted(Landroid/webkit/WebView;Ljava/lang/String;Landroid/graphics/Bitmap;)V
    .locals 0

    .line 114
    invoke-super {p0, p1, p2, p3}, Landroid/webkit/WebViewClient;->onPageStarted(Landroid/webkit/WebView;Ljava/lang/String;Landroid/graphics/Bitmap;)V

    .line 115
    sget-object p1, Lcom/bianfeng/paylib/utils/YmnURLManager;->return_url:Ljava/lang/String;

    invoke-virtual {p1, p2}, Ljava/lang/String;->equalsIgnoreCase(Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_0

    .line 116
    iget-object p1, p0, Lcom/bianfeng/paylib/ui/AliWebPayActivty$1;->this$0:Lcom/bianfeng/paylib/ui/AliWebPayActivty;

    invoke-virtual {p1}, Lcom/bianfeng/paylib/ui/AliWebPayActivty;->finish()V

    :cond_0
    return-void
.end method

.method public shouldOverrideUrlLoading(Landroid/webkit/WebView;Ljava/lang/String;)Z
    .locals 2

    if-nez p2, :cond_0

    const/4 p1, 0x0

    return p1

    :cond_0
    const/4 v0, 0x1

    .line 87
    :try_start_0
    iget-object v1, p0, Lcom/bianfeng/paylib/ui/AliWebPayActivty$1;->this$0:Lcom/bianfeng/paylib/ui/AliWebPayActivty;

    invoke-static {v1}, Lcom/bianfeng/paylib/ui/AliWebPayActivty;->access$000(Lcom/bianfeng/paylib/ui/AliWebPayActivty;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p2, v1}, Ljava/lang/String;->startsWith(Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_3

    .line 88
    iget-object v1, p0, Lcom/bianfeng/paylib/ui/AliWebPayActivty$1;->this$0:Lcom/bianfeng/paylib/ui/AliWebPayActivty;

    invoke-static {v1}, Lcom/bianfeng/paylib/ui/AliWebPayActivty;->access$100(Lcom/bianfeng/paylib/ui/AliWebPayActivty;)I

    move-result v1

    if-eqz v1, :cond_2

    if-eq v1, v0, :cond_1

    goto :goto_0

    .line 96
    :cond_1
    invoke-static {p2, v0}, Landroid/content/Intent;->parseUri(Ljava/lang/String;I)Landroid/content/Intent;

    move-result-object p1

    const/high16 p2, 0x10200000

    .line 97
    invoke-virtual {p1, p2}, Landroid/content/Intent;->addFlags(I)Landroid/content/Intent;

    .line 98
    iget-object p2, p0, Lcom/bianfeng/paylib/ui/AliWebPayActivty$1;->this$0:Lcom/bianfeng/paylib/ui/AliWebPayActivty;

    invoke-virtual {p2, p1}, Lcom/bianfeng/paylib/ui/AliWebPayActivty;->startActivity(Landroid/content/Intent;)V

    .line 99
    iget-object p1, p0, Lcom/bianfeng/paylib/ui/AliWebPayActivty$1;->this$0:Lcom/bianfeng/paylib/ui/AliWebPayActivty;

    invoke-virtual {p1}, Lcom/bianfeng/paylib/ui/AliWebPayActivty;->finish()V

    return v0

    .line 91
    :cond_2
    new-instance p1, Landroid/content/Intent;

    const-string v1, "android.intent.action.VIEW"

    invoke-static {p2}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object p2

    invoke-direct {p1, v1, p2}, Landroid/content/Intent;-><init>(Ljava/lang/String;Landroid/net/Uri;)V

    .line 92
    iget-object p2, p0, Lcom/bianfeng/paylib/ui/AliWebPayActivty$1;->this$0:Lcom/bianfeng/paylib/ui/AliWebPayActivty;

    invoke-virtual {p2, p1}, Lcom/bianfeng/paylib/ui/AliWebPayActivty;->startActivity(Landroid/content/Intent;)V

    .line 93
    iget-object p1, p0, Lcom/bianfeng/paylib/ui/AliWebPayActivty$1;->this$0:Lcom/bianfeng/paylib/ui/AliWebPayActivty;

    invoke-virtual {p1}, Lcom/bianfeng/paylib/ui/AliWebPayActivty;->finish()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return v0

    .line 108
    :cond_3
    :goto_0
    invoke-virtual {p1, p2}, Landroid/webkit/WebView;->loadUrl(Ljava/lang/String;)V

    :catch_0
    return v0
.end method
