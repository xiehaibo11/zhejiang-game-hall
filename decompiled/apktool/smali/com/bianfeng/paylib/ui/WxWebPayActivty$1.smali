.class Lcom/bianfeng/paylib/ui/WxWebPayActivty$1;
.super Landroid/webkit/WebViewClient;
.source "WxWebPayActivty.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/bianfeng/paylib/ui/WxWebPayActivty;->initData()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic this$0:Lcom/bianfeng/paylib/ui/WxWebPayActivty;


# direct methods
.method constructor <init>(Lcom/bianfeng/paylib/ui/WxWebPayActivty;)V
    .locals 0

    .line 92
    iput-object p1, p0, Lcom/bianfeng/paylib/ui/WxWebPayActivty$1;->this$0:Lcom/bianfeng/paylib/ui/WxWebPayActivty;

    invoke-direct {p0}, Landroid/webkit/WebViewClient;-><init>()V

    return-void
.end method


# virtual methods
.method public onPageFinished(Landroid/webkit/WebView;Ljava/lang/String;)V
    .locals 0

    .line 109
    invoke-super {p0, p1, p2}, Landroid/webkit/WebViewClient;->onPageFinished(Landroid/webkit/WebView;Ljava/lang/String;)V

    .line 110
    iget-object p1, p0, Lcom/bianfeng/paylib/ui/WxWebPayActivty$1;->this$0:Lcom/bianfeng/paylib/ui/WxWebPayActivty;

    invoke-static {p1}, Lcom/bianfeng/paylib/ui/WxWebPayActivty;->access$300(Lcom/bianfeng/paylib/ui/WxWebPayActivty;)Landroid/widget/LinearLayout;

    move-result-object p1

    const/16 p2, 0x8

    invoke-virtual {p1, p2}, Landroid/widget/LinearLayout;->setVisibility(I)V

    return-void
.end method

.method public shouldOverrideUrlLoading(Landroid/webkit/WebView;Landroid/webkit/WebResourceRequest;)Z
    .locals 0

    .line 102
    iget-object p1, p0, Lcom/bianfeng/paylib/ui/WxWebPayActivty$1;->this$0:Lcom/bianfeng/paylib/ui/WxWebPayActivty;

    invoke-interface {p2}, Landroid/webkit/WebResourceRequest;->getUrl()Landroid/net/Uri;

    move-result-object p2

    invoke-virtual {p2}, Landroid/net/Uri;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {p1, p2}, Lcom/bianfeng/paylib/ui/WxWebPayActivty;->access$202(Lcom/bianfeng/paylib/ui/WxWebPayActivty;Ljava/lang/String;)Ljava/lang/String;

    .line 103
    iget-object p1, p0, Lcom/bianfeng/paylib/ui/WxWebPayActivty$1;->this$0:Lcom/bianfeng/paylib/ui/WxWebPayActivty;

    invoke-static {p1}, Lcom/bianfeng/paylib/ui/WxWebPayActivty;->access$200(Lcom/bianfeng/paylib/ui/WxWebPayActivty;)Ljava/lang/String;

    move-result-object p2

    invoke-static {p1, p2}, Lcom/bianfeng/paylib/ui/WxWebPayActivty;->access$100(Lcom/bianfeng/paylib/ui/WxWebPayActivty;Ljava/lang/String;)V

    const/4 p1, 0x0

    return p1
.end method

.method public shouldOverrideUrlLoading(Landroid/webkit/WebView;Ljava/lang/String;)Z
    .locals 0

    .line 95
    iget-object p1, p0, Lcom/bianfeng/paylib/ui/WxWebPayActivty$1;->this$0:Lcom/bianfeng/paylib/ui/WxWebPayActivty;

    invoke-static {p1, p2}, Lcom/bianfeng/paylib/ui/WxWebPayActivty;->access$100(Lcom/bianfeng/paylib/ui/WxWebPayActivty;Ljava/lang/String;)V

    const/4 p1, 0x0

    return p1
.end method
