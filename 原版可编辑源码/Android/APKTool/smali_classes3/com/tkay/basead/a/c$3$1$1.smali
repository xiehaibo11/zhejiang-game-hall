.class final Lcom/tkay/basead/a/c$3$1$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/a/c$3$1;->a(Z)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/basead/a/c$3$1;


# direct methods
.method constructor <init>(Lcom/tkay/basead/a/c$3$1;)V
    .locals 0

    .line 230
    iput-object p1, p0, Lcom/tkay/basead/a/c$3$1$1;->a:Lcom/tkay/basead/a/c$3$1;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    .line 234
    iget-object v0, p0, Lcom/tkay/basead/a/c$3$1$1;->a:Lcom/tkay/basead/a/c$3$1;

    iget-object v0, v0, Lcom/tkay/basead/a/c$3$1;->b:Lcom/tkay/basead/a/c$3;

    iget-object v0, v0, Lcom/tkay/basead/a/c$3;->b:Lcom/tkay/basead/a/c;

    iget-object v1, p0, Lcom/tkay/basead/a/c$3$1$1;->a:Lcom/tkay/basead/a/c$3$1;

    iget v1, v1, Lcom/tkay/basead/a/c$3$1;->a:I

    iget-object v2, p0, Lcom/tkay/basead/a/c$3$1$1;->a:Lcom/tkay/basead/a/c$3$1;

    iget-object v2, v2, Lcom/tkay/basead/a/c$3$1;->b:Lcom/tkay/basead/a/c$3;

    iget-object v2, v2, Lcom/tkay/basead/a/c$3;->a:Lcom/tkay/basead/c/i;

    invoke-static {v0, v1, v2}, Lcom/tkay/basead/a/c;->a(Lcom/tkay/basead/a/c;ILcom/tkay/basead/c/i;)V

    return-void
.end method
