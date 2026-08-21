.class final Lcom/tkay/basead/a/b/b$2;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/a/b/b;->a(Z)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Ljava/lang/String;

.field final synthetic c:Lcom/tkay/basead/a/b/b;


# direct methods
.method constructor <init>(Lcom/tkay/basead/a/b/b;Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 237
    iput-object p1, p0, Lcom/tkay/basead/a/b/b$2;->c:Lcom/tkay/basead/a/b/b;

    iput-object p2, p0, Lcom/tkay/basead/a/b/b$2;->a:Ljava/lang/String;

    iput-object p3, p0, Lcom/tkay/basead/a/b/b$2;->b:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 4

    .line 240
    iget-object v0, p0, Lcom/tkay/basead/a/b/b$2;->c:Lcom/tkay/basead/a/b/b;

    new-instance v1, Lcom/tkay/basead/mraid/MraidWebView;

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->f()Landroid/content/Context;

    move-result-object v2

    invoke-direct {v1, v2}, Lcom/tkay/basead/mraid/MraidWebView;-><init>(Landroid/content/Context;)V

    invoke-static {v0, v1}, Lcom/tkay/basead/a/b/b;->a(Lcom/tkay/basead/a/b/b;Lcom/tkay/basead/mraid/MraidWebView;)Lcom/tkay/basead/mraid/MraidWebView;

    .line 241
    iget-object v0, p0, Lcom/tkay/basead/a/b/b$2;->a:Ljava/lang/String;

    iget-object v1, p0, Lcom/tkay/basead/a/b/b$2;->b:Ljava/lang/String;

    iget-object v2, p0, Lcom/tkay/basead/a/b/b$2;->c:Lcom/tkay/basead/a/b/b;

    invoke-static {v2}, Lcom/tkay/basead/a/b/b;->a(Lcom/tkay/basead/a/b/b;)Lcom/tkay/basead/mraid/MraidWebView;

    move-result-object v2

    new-instance v3, Lcom/tkay/basead/a/b/b$2$1;

    invoke-direct {v3, p0}, Lcom/tkay/basead/a/b/b$2$1;-><init>(Lcom/tkay/basead/a/b/b$2;)V

    invoke-static {v0, v1, v2, v3}, Lcom/tkay/basead/mraid/d;->a(Ljava/lang/String;Ljava/lang/String;Lcom/tkay/basead/mraid/MraidWebView;Lcom/tkay/basead/mraid/d$a;)V

    return-void
.end method
