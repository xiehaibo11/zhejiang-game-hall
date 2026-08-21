.class final Lcom/mbridge/msdk/c/b/b$1;
.super Lcom/mbridge/msdk/foundation/same/net/b/a;
.source "MraidJSController.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/c/b/b;->a(Landroid/content/Context;Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Lcom/mbridge/msdk/c/b/b;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/c/b/b;Ljava/lang/String;)V
    .locals 0

    .line 61
    iput-object p1, p0, Lcom/mbridge/msdk/c/b/b$1;->b:Lcom/mbridge/msdk/c/b/b;

    iput-object p2, p0, Lcom/mbridge/msdk/c/b/b$1;->a:Ljava/lang/String;

    invoke-direct {p0}, Lcom/mbridge/msdk/foundation/same/net/b/a;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;)V
    .locals 2

    .line 64
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "request mraid js success, content = "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "MraidJSController"

    invoke-static {v1, v0}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 65
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 66
    iget-object v0, p0, Lcom/mbridge/msdk/c/b/b$1;->b:Lcom/mbridge/msdk/c/b/b;

    invoke-static {v0, p1}, Lcom/mbridge/msdk/c/b/b;->a(Lcom/mbridge/msdk/c/b/b;Ljava/lang/String;)Ljava/lang/String;

    .line 67
    iget-object v0, p0, Lcom/mbridge/msdk/c/b/b$1;->b:Lcom/mbridge/msdk/c/b/b;

    invoke-static {v0, p1}, Lcom/mbridge/msdk/c/b/b;->b(Lcom/mbridge/msdk/c/b/b;Ljava/lang/String;)V

    .line 68
    invoke-static {}, Lcom/mbridge/msdk/foundation/a/a/a;->a()Lcom/mbridge/msdk/foundation/a/a/a;

    move-result-object p1

    iget-object v0, p0, Lcom/mbridge/msdk/c/b/b$1;->a:Ljava/lang/String;

    invoke-virtual {p1, v1, v0}, Lcom/mbridge/msdk/foundation/a/a/a;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final b(Ljava/lang/String;)V
    .locals 2

    .line 74
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "fail request mraid js. "

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    const-string v0, "MraidJSController"

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method
