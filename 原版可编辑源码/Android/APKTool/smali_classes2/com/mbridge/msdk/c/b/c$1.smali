.class final Lcom/mbridge/msdk/c/b/c$1;
.super Lcom/mbridge/msdk/foundation/same/net/b/a;
.source "WebEnvCheckController.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/mbridge/msdk/c/b/c;->a(Landroid/content/Context;Ljava/lang/String;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Lcom/mbridge/msdk/c/b/c;


# direct methods
.method constructor <init>(Lcom/mbridge/msdk/c/b/c;Ljava/lang/String;)V
    .locals 0

    .line 648
    iput-object p1, p0, Lcom/mbridge/msdk/c/b/c$1;->b:Lcom/mbridge/msdk/c/b/c;

    iput-object p2, p0, Lcom/mbridge/msdk/c/b/c$1;->a:Ljava/lang/String;

    invoke-direct {p0}, Lcom/mbridge/msdk/foundation/same/net/b/a;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;)V
    .locals 3

    .line 651
    invoke-static {}, Lcom/mbridge/msdk/c/b/c;->c()Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "request web env check js success, content = "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    .line 652
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 653
    iget-object v0, p0, Lcom/mbridge/msdk/c/b/c$1;->b:Lcom/mbridge/msdk/c/b/c;

    invoke-static {v0, p1}, Lcom/mbridge/msdk/c/b/c;->a(Lcom/mbridge/msdk/c/b/c;Ljava/lang/String;)Ljava/lang/String;

    .line 654
    iget-object v0, p0, Lcom/mbridge/msdk/c/b/c$1;->b:Lcom/mbridge/msdk/c/b/c;

    invoke-static {v0, p1}, Lcom/mbridge/msdk/c/b/c;->b(Lcom/mbridge/msdk/c/b/c;Ljava/lang/String;)V

    .line 655
    invoke-static {}, Lcom/mbridge/msdk/foundation/a/a/a;->a()Lcom/mbridge/msdk/foundation/a/a/a;

    move-result-object p1

    invoke-static {}, Lcom/mbridge/msdk/c/b/c;->d()Ljava/lang/String;

    move-result-object v0

    iget-object v1, p0, Lcom/mbridge/msdk/c/b/c$1;->a:Ljava/lang/String;

    invoke-virtual {p1, v0, v1}, Lcom/mbridge/msdk/foundation/a/a/a;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public final b(Ljava/lang/String;)V
    .locals 3

    .line 661
    invoke-static {}, Lcom/mbridge/msdk/c/b/c;->c()Ljava/lang/String;

    move-result-object v0

    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "fail request web env check js  js. "

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/mbridge/msdk/foundation/tools/z;->a(Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method
