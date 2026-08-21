.class Lcom/tkay/expressad/splash/js/SplashExpandDialog$1;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/splash/js/SplashExpandDialog;->a()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/splash/js/SplashExpandDialog;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/splash/js/SplashExpandDialog;)V
    .locals 0

    .line 100
    iput-object p1, p0, Lcom/tkay/expressad/splash/js/SplashExpandDialog$1;->a:Lcom/tkay/expressad/splash/js/SplashExpandDialog;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 0

    .line 103
    iget-object p1, p0, Lcom/tkay/expressad/splash/js/SplashExpandDialog$1;->a:Lcom/tkay/expressad/splash/js/SplashExpandDialog;

    invoke-virtual {p1}, Lcom/tkay/expressad/splash/js/SplashExpandDialog;->dismiss()V

    return-void
.end method
