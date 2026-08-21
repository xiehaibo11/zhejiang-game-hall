.class final Lcom/tkay/splashad/a/b$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/common/j/b;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/splashad/a/b;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/splashad/a/b;


# direct methods
.method constructor <init>(Lcom/tkay/splashad/a/b;)V
    .locals 0

    .line 25
    iput-object p1, p0, Lcom/tkay/splashad/a/b$1;->a:Lcom/tkay/splashad/a/b;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 28
    iget-object v0, p0, Lcom/tkay/splashad/a/b$1;->a:Lcom/tkay/splashad/a/b;

    invoke-static {v0}, Lcom/tkay/splashad/a/b;->access$000(Lcom/tkay/splashad/a/b;)Z

    move-result v0

    if-nez v0, :cond_0

    .line 29
    iget-object v0, p0, Lcom/tkay/splashad/a/b$1;->a:Lcom/tkay/splashad/a/b;

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/tkay/splashad/a/b;->access$102(Lcom/tkay/splashad/a/b;Z)Z

    .line 30
    iget-object v0, p0, Lcom/tkay/splashad/a/b$1;->a:Lcom/tkay/splashad/a/b;

    invoke-static {v0}, Lcom/tkay/splashad/a/b;->access$200(Lcom/tkay/splashad/a/b;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Lcom/tkay/splashad/a/b;->onTimeout(Ljava/lang/String;)V

    :cond_0
    return-void
.end method
