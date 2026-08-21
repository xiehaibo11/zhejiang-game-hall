.class final Lcom/tkay/basead/d$1;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/core/common/j/b;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/basead/d;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/basead/d;


# direct methods
.method constructor <init>(Lcom/tkay/basead/d;)V
    .locals 0

    .line 20
    iput-object p1, p0, Lcom/tkay/basead/d$1;->a:Lcom/tkay/basead/d;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    .line 23
    iget-object v0, p0, Lcom/tkay/basead/d$1;->a:Lcom/tkay/basead/d;

    const/4 v1, 0x0

    iput-boolean v1, v0, Lcom/tkay/basead/d;->d:Z

    .line 25
    iget-object v0, p0, Lcom/tkay/basead/d$1;->a:Lcom/tkay/basead/d;

    const-wide/16 v1, -0x1

    iput-wide v1, v0, Lcom/tkay/basead/d;->b:J

    .line 26
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/basead/d$1;->a:Lcom/tkay/basead/d;

    iget-object v1, v1, Lcom/tkay/basead/d;->c:Ljava/lang/Runnable;

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/b/m;->a(Ljava/lang/Runnable;)V

    return-void
.end method
