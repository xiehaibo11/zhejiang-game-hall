.class final Lcom/mbridge/msdk/splash/js/SplashExpandDialog$1;
.super Ljava/lang/Object;
.source "SplashExpandDialog.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/splash/js/SplashExpandDialog;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/mbridge/msdk/splash/js/SplashExpandDialog;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/splash/js/SplashExpandDialog;)V
    .locals 0

    .line 100
    iput-object p1, p0, Lcom/mbridge/msdk/splash/js/SplashExpandDialog$1;->a:Lcom/mbridge/msdk/splash/js/SplashExpandDialog;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final onClick(Landroid/view/View;)V
    .locals 0

    .line 103
    iget-object p1, p0, Lcom/mbridge/msdk/splash/js/SplashExpandDialog$1;->a:Lcom/mbridge/msdk/splash/js/SplashExpandDialog;

    invoke-virtual {p1}, Lcom/mbridge/msdk/splash/js/SplashExpandDialog;->dismiss()V

    return-void
.end method
