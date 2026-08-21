.class final Lcom/tkay/core/common/k/a$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/core/common/k/a;->a(ILcom/tkay/core/common/f/ai;Lcom/tkay/core/common/f/aj;J)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/common/f/ai;

.field final synthetic b:I

.field final synthetic c:Lcom/tkay/core/common/f/aj;

.field final synthetic d:J

.field final synthetic e:Lcom/tkay/core/common/k/a;


# direct methods
.method constructor <init>(Lcom/tkay/core/common/k/a;Lcom/tkay/core/common/f/ai;ILcom/tkay/core/common/f/aj;J)V
    .locals 0

    .line 77
    iput-object p1, p0, Lcom/tkay/core/common/k/a$1;->e:Lcom/tkay/core/common/k/a;

    iput-object p2, p0, Lcom/tkay/core/common/k/a$1;->a:Lcom/tkay/core/common/f/ai;

    iput p3, p0, Lcom/tkay/core/common/k/a$1;->b:I

    iput-object p4, p0, Lcom/tkay/core/common/k/a$1;->c:Lcom/tkay/core/common/f/aj;

    iput-wide p5, p0, Lcom/tkay/core/common/k/a$1;->d:J

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 9

    .line 80
    iget-object v0, p0, Lcom/tkay/core/common/k/a$1;->a:Lcom/tkay/core/common/f/ai;

    instance-of v0, v0, Lcom/tkay/core/common/f/d;

    if-eqz v0, :cond_0

    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->G()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 81
    invoke-static {}, Lcom/tkay/core/common/b/h;->a()Lcom/tkay/core/common/b/h;

    move-result-object v0

    iget v1, p0, Lcom/tkay/core/common/k/a$1;->b:I

    iget-object v2, p0, Lcom/tkay/core/common/k/a$1;->a:Lcom/tkay/core/common/f/ai;

    check-cast v2, Lcom/tkay/core/common/f/d;

    invoke-virtual {v0, v1, v2}, Lcom/tkay/core/common/b/h;->a(ILcom/tkay/core/common/f/d;)V

    .line 84
    :cond_0
    iget-object v3, p0, Lcom/tkay/core/common/k/a$1;->e:Lcom/tkay/core/common/k/a;

    iget v4, p0, Lcom/tkay/core/common/k/a$1;->b:I

    iget-object v5, p0, Lcom/tkay/core/common/k/a$1;->a:Lcom/tkay/core/common/f/ai;

    iget-object v6, p0, Lcom/tkay/core/common/k/a$1;->c:Lcom/tkay/core/common/f/aj;

    iget-wide v7, p0, Lcom/tkay/core/common/k/a$1;->d:J

    invoke-static/range {v3 .. v8}, Lcom/tkay/core/common/k/a;->a(Lcom/tkay/core/common/k/a;ILcom/tkay/core/common/f/ai;Lcom/tkay/core/common/f/aj;J)Lcom/tkay/core/common/f/e;

    move-result-object v0

    if-nez v0, :cond_1

    return-void

    .line 93
    :cond_1
    iget-object v1, p0, Lcom/tkay/core/common/k/a$1;->e:Lcom/tkay/core/common/k/a;

    iget v2, p0, Lcom/tkay/core/common/k/a$1;->b:I

    iget-object v3, p0, Lcom/tkay/core/common/k/a$1;->a:Lcom/tkay/core/common/f/ai;

    invoke-static {v2, v3}, Lcom/tkay/core/common/k/a;->b(ILcom/tkay/core/common/f/ai;)Z

    move-result v2

    invoke-static {v1, v0, v2}, Lcom/tkay/core/common/k/a;->a(Lcom/tkay/core/common/k/a;Lcom/tkay/core/common/f/p;Z)V

    return-void
.end method
