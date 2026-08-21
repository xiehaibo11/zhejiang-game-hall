.class final Lcom/tkay/expressad/a/a$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/a/a;->a(ZLcom/tkay/expressad/out/d;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Z

.field final synthetic b:Lcom/tkay/expressad/out/d;

.field final synthetic c:Lcom/tkay/expressad/a/a;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/a/a;ZLcom/tkay/expressad/out/d;)V
    .locals 0

    .line 530
    iput-object p1, p0, Lcom/tkay/expressad/a/a$1;->c:Lcom/tkay/expressad/a/a;

    iput-boolean p2, p0, Lcom/tkay/expressad/a/a$1;->a:Z

    iput-object p3, p0, Lcom/tkay/expressad/a/a$1;->b:Lcom/tkay/expressad/out/d;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 533
    iget-boolean v0, p0, Lcom/tkay/expressad/a/a$1;->a:Z

    if-eqz v0, :cond_0

    sget-boolean v0, Lcom/tkay/expressad/a/a;->b:Z

    if-nez v0, :cond_0

    sget-boolean v0, Lcom/tkay/expressad/b;->o:Z

    if-eqz v0, :cond_0

    .line 534
    iget-object v0, p0, Lcom/tkay/expressad/a/a$1;->c:Lcom/tkay/expressad/a/a;

    invoke-static {v0}, Lcom/tkay/expressad/a/a;->a(Lcom/tkay/expressad/a/a;)V

    .line 536
    :cond_0
    iget-object v0, p0, Lcom/tkay/expressad/a/a$1;->c:Lcom/tkay/expressad/a/a;

    invoke-static {v0}, Lcom/tkay/expressad/a/a;->b(Lcom/tkay/expressad/a/a;)Lcom/tkay/expressad/out/j$c;

    move-result-object v0

    if-eqz v0, :cond_1

    sget-boolean v0, Lcom/tkay/expressad/a/a;->b:Z

    if-nez v0, :cond_1

    sget-boolean v0, Lcom/tkay/expressad/b;->o:Z

    if-eqz v0, :cond_1

    .line 537
    iget-object v0, p0, Lcom/tkay/expressad/a/a$1;->c:Lcom/tkay/expressad/a/a;

    invoke-static {v0}, Lcom/tkay/expressad/a/a;->b(Lcom/tkay/expressad/a/a;)Lcom/tkay/expressad/out/j$c;

    move-result-object v0

    iget-object v1, p0, Lcom/tkay/expressad/a/a$1;->b:Lcom/tkay/expressad/out/d;

    invoke-interface {v0, v1}, Lcom/tkay/expressad/out/j$c;->b(Lcom/tkay/expressad/out/d;)V

    :cond_1
    return-void
.end method
