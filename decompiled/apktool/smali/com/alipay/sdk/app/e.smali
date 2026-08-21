.class Lcom/alipay/sdk/app/e;
.super Ljava/lang/Object;
.source "SourceFile"

# interfaces
.implements Landroid/content/DialogInterface$OnClickListener;


# instance fields
.field final synthetic a:Lcom/alipay/sdk/app/c;


# direct methods
.method constructor <init>(Lcom/alipay/sdk/app/c;)V
    .locals 0

    .line 74
    iput-object p1, p0, Lcom/alipay/sdk/app/e;->a:Lcom/alipay/sdk/app/c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/content/DialogInterface;I)V
    .locals 0

    .line 78
    iget-object p1, p0, Lcom/alipay/sdk/app/e;->a:Lcom/alipay/sdk/app/c;

    iget-object p1, p1, Lcom/alipay/sdk/app/c;->b:Landroid/webkit/SslErrorHandler;

    invoke-virtual {p1}, Landroid/webkit/SslErrorHandler;->cancel()V

    .line 79
    iget-object p1, p0, Lcom/alipay/sdk/app/e;->a:Lcom/alipay/sdk/app/c;

    iget-object p1, p1, Lcom/alipay/sdk/app/c;->c:Lcom/alipay/sdk/app/b;

    const/4 p2, 0x0

    invoke-static {p1, p2}, Lcom/alipay/sdk/app/b;->a(Lcom/alipay/sdk/app/b;Z)Z

    .line 80
    invoke-static {}, Lcom/alipay/sdk/app/j;->c()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/alipay/sdk/app/j;->a(Ljava/lang/String;)V

    .line 81
    iget-object p1, p0, Lcom/alipay/sdk/app/e;->a:Lcom/alipay/sdk/app/c;

    iget-object p1, p1, Lcom/alipay/sdk/app/c;->a:Landroid/app/Activity;

    invoke-virtual {p1}, Landroid/app/Activity;->finish()V

    return-void
.end method
