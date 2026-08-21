.class final Lcom/tkay/expressad/a/g$4;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/tkay/expressad/a/g;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/a/g;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/a/g;)V
    .locals 0

    .line 377
    iput-object p1, p0, Lcom/tkay/expressad/a/g$4;->a:Lcom/tkay/expressad/a/g;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 2

    .line 380
    iget-object v0, p0, Lcom/tkay/expressad/a/g$4;->a:Lcom/tkay/expressad/a/g;

    invoke-static {v0}, Lcom/tkay/expressad/a/g;->n(Lcom/tkay/expressad/a/g;)Z

    .line 381
    iget-object v0, p0, Lcom/tkay/expressad/a/g$4;->a:Lcom/tkay/expressad/a/g;

    const/4 v1, 0x1

    invoke-static {v0, v1}, Lcom/tkay/expressad/a/g;->a(Lcom/tkay/expressad/a/g;I)I

    .line 382
    invoke-static {}, Lcom/tkay/expressad/a/g;->a()Ljava/lang/String;

    new-instance v0, Ljava/lang/StringBuilder;

    const-string v1, "js timeout!timeout limit:"

    invoke-direct {v0, v1}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    iget-object v1, p0, Lcom/tkay/expressad/a/g$4;->a:Lcom/tkay/expressad/a/g;

    invoke-static {v1}, Lcom/tkay/expressad/a/g;->o(Lcom/tkay/expressad/a/g;)I

    move-result v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v1, "ms"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 383
    iget-object v0, p0, Lcom/tkay/expressad/a/g$4;->a:Lcom/tkay/expressad/a/g;

    invoke-static {v0}, Lcom/tkay/expressad/a/g;->p(Lcom/tkay/expressad/a/g;)V

    return-void
.end method
