.class public Lcom/tkay/basead/mraid/d;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/basead/mraid/d$a;
    }
.end annotation


# static fields
.field public static a:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 24
    const-class v0, Lcom/tkay/basead/mraid/d;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/basead/mraid/d;->a:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 22
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a(Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;)Ljava/lang/String;
    .locals 2

    .line 29
    invoke-virtual {p1}, Lcom/tkay/core/common/f/h;->i()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 30
    invoke-virtual {p1}, Lcom/tkay/core/common/f/h;->i()Ljava/lang/String;

    move-result-object p0

    goto :goto_0

    .line 31
    :cond_0
    invoke-virtual {p1}, Lcom/tkay/core/common/f/h;->h()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    .line 33
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/res/d;->a(Landroid/content/Context;)Lcom/tkay/core/common/res/d;

    move-result-object v0

    invoke-virtual {v0, p0, p1}, Lcom/tkay/core/common/res/d;->b(Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;)Ljava/io/File;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 35
    sget-object p0, Lcom/tkay/basead/mraid/d;->a:Ljava/lang/String;

    new-instance p1, Ljava/lang/StringBuilder;

    const-string v1, "loadMraidResource: html exists: "

    invoke-direct {p1, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0}, Ljava/io/File;->toURI()Ljava/net/URI;

    move-result-object v1

    invoke-virtual {v1}, Ljava/net/URI;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p0, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 36
    invoke-virtual {v0}, Ljava/io/File;->toURI()Ljava/net/URI;

    move-result-object p0

    invoke-virtual {p0}, Ljava/net/URI;->toString()Ljava/lang/String;

    move-result-object p0

    goto :goto_0

    .line 38
    :cond_1
    sget-object v0, Lcom/tkay/basead/mraid/d;->a:Ljava/lang/String;

    const-string v1, "loadMraidResource: html no exists: "

    invoke-static {v0, v1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    .line 39
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/tkay/core/common/res/d;->a(Landroid/content/Context;)Lcom/tkay/core/common/res/d;

    move-result-object v0

    .line 40
    invoke-virtual {p1}, Lcom/tkay/core/common/f/h;->h()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1, p0, p1}, Lcom/tkay/core/common/res/d;->a(Ljava/lang/String;Lcom/tkay/core/common/f/i;Lcom/tkay/core/common/f/h;)Ljava/lang/String;

    move-result-object p0

    goto :goto_0

    :cond_2
    const-string p0, ""

    :goto_0
    return-object p0
.end method

.method public static a(Ljava/lang/String;Ljava/lang/String;Lcom/tkay/basead/mraid/MraidWebView;Lcom/tkay/basead/mraid/d$a;)V
    .locals 2

    if-nez p2, :cond_0

    return-void

    .line 54
    :cond_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    new-instance v1, Lcom/tkay/basead/mraid/d$1;

    invoke-direct {v1, p1, p3, p2, p0}, Lcom/tkay/basead/mraid/d$1;-><init>(Ljava/lang/String;Lcom/tkay/basead/mraid/d$a;Lcom/tkay/basead/mraid/MraidWebView;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method
