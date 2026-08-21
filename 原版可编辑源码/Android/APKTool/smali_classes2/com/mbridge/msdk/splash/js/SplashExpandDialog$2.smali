.class final Lcom/mbridge/msdk/splash/js/SplashExpandDialog$2;
.super Lcom/mbridge/msdk/mbjscommon/c/b;
.source "SplashExpandDialog.java"


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

    .line 131
    iput-object p1, p0, Lcom/mbridge/msdk/splash/js/SplashExpandDialog$2;->a:Lcom/mbridge/msdk/splash/js/SplashExpandDialog;

    invoke-direct {p0}, Lcom/mbridge/msdk/mbjscommon/c/b;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Landroid/webkit/WebView;Ljava/lang/String;)V
    .locals 2

    .line 135
    invoke-super {p0, p1, p2}, Lcom/mbridge/msdk/mbjscommon/c/b;->a(Landroid/webkit/WebView;Ljava/lang/String;)V

    .line 137
    new-instance p2, Ljava/lang/StringBuilder;

    const-string v0, "javascript:"

    invoke-direct {p2, v0}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    .line 138
    invoke-static {}, Lcom/mbridge/msdk/c/b/b;->a()Lcom/mbridge/msdk/c/b/b;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/c/b/b;->b()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p2, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 140
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x13

    if-gt v0, v1, :cond_0

    .line 141
    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {p1, p2}, Landroid/webkit/WebView;->loadUrl(Ljava/lang/String;)V

    goto :goto_0

    .line 143
    :cond_0
    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    new-instance v0, Lcom/mbridge/msdk/splash/js/SplashExpandDialog$2$1;

    invoke-direct {v0, p0}, Lcom/mbridge/msdk/splash/js/SplashExpandDialog$2$1;-><init>(Lcom/mbridge/msdk/splash/js/SplashExpandDialog$2;)V

    invoke-virtual {p1, p2, v0}, Landroid/webkit/WebView;->evaluateJavascript(Ljava/lang/String;Landroid/webkit/ValueCallback;)V

    .line 149
    :goto_0
    iget-object p1, p0, Lcom/mbridge/msdk/splash/js/SplashExpandDialog$2;->a:Lcom/mbridge/msdk/splash/js/SplashExpandDialog;

    invoke-static {p1}, Lcom/mbridge/msdk/splash/js/SplashExpandDialog;->a(Lcom/mbridge/msdk/splash/js/SplashExpandDialog;)V

    return-void
.end method
