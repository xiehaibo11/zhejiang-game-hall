.class Lcom/alipay/sdk/auth/e;
.super Ljava/lang/Object;
.source "SourceFile"

# interfaces
.implements Landroid/content/DialogInterface$OnClickListener;


# instance fields
.field final synthetic a:Lcom/alipay/sdk/auth/d;


# direct methods
.method constructor <init>(Lcom/alipay/sdk/auth/d;)V
    .locals 0

    .line 206
    iput-object p1, p0, Lcom/alipay/sdk/auth/e;->a:Lcom/alipay/sdk/auth/d;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/content/DialogInterface;I)V
    .locals 1

    .line 210
    iget-object p2, p0, Lcom/alipay/sdk/auth/e;->a:Lcom/alipay/sdk/auth/d;

    iget-object p2, p2, Lcom/alipay/sdk/auth/d;->b:Lcom/alipay/sdk/auth/AuthActivity$c;

    iget-object p2, p2, Lcom/alipay/sdk/auth/AuthActivity$c;->a:Lcom/alipay/sdk/auth/AuthActivity;

    const/4 v0, 0x1

    invoke-static {p2, v0}, Lcom/alipay/sdk/auth/AuthActivity;->b(Lcom/alipay/sdk/auth/AuthActivity;Z)Z

    .line 211
    iget-object p2, p0, Lcom/alipay/sdk/auth/e;->a:Lcom/alipay/sdk/auth/d;

    iget-object p2, p2, Lcom/alipay/sdk/auth/d;->a:Landroid/webkit/SslErrorHandler;

    invoke-virtual {p2}, Landroid/webkit/SslErrorHandler;->proceed()V

    .line 212
    invoke-interface {p1}, Landroid/content/DialogInterface;->dismiss()V

    return-void
.end method
