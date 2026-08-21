.class final Lcom/tkay/basead/a/c$3$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/common/g/a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/a/c$3;->run()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:I

.field final synthetic b:Lcom/tkay/basead/a/c$3;


# direct methods
.method constructor <init>(Lcom/tkay/basead/a/c$3;I)V
    .locals 0

    .line 226
    iput-object p1, p0, Lcom/tkay/basead/a/c$3$1;->b:Lcom/tkay/basead/a/c$3;

    iput p2, p0, Lcom/tkay/basead/a/c$3$1;->a:I

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Z)V
    .locals 1

    if-eqz p1, :cond_0

    .line 230
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object p1

    new-instance v0, Lcom/tkay/basead/a/c$3$1$1;

    invoke-direct {v0, p0}, Lcom/tkay/basead/a/c$3$1$1;-><init>(Lcom/tkay/basead/a/c$3$1;)V

    invoke-virtual {p1, v0}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    return-void

    .line 238
    :cond_0
    iget-object p1, p0, Lcom/tkay/basead/a/c$3$1;->b:Lcom/tkay/basead/a/c$3;

    iget-object p1, p1, Lcom/tkay/basead/a/c$3;->b:Lcom/tkay/basead/a/c;

    const/4 v0, 0x0

    iput-boolean v0, p1, Lcom/tkay/basead/a/c;->m:Z

    return-void
.end method
