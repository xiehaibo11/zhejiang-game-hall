.class final Lcom/tkay/basead/d/a/a$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/d/a/a;->a(Lcom/tkay/core/common/f/i;Lcom/tkay/basead/d/a/a$a;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/core/common/f/i;

.field final synthetic b:Lcom/tkay/basead/d/a/a$a;

.field final synthetic c:Lcom/tkay/basead/d/a/a;


# direct methods
.method constructor <init>(Lcom/tkay/basead/d/a/a;Lcom/tkay/core/common/f/i;Lcom/tkay/basead/d/a/a$a;)V
    .locals 0

    .line 79
    iput-object p1, p0, Lcom/tkay/basead/d/a/a$1;->c:Lcom/tkay/basead/d/a/a;

    iput-object p2, p0, Lcom/tkay/basead/d/a/a$1;->a:Lcom/tkay/core/common/f/i;

    iput-object p3, p0, Lcom/tkay/basead/d/a/a$1;->b:Lcom/tkay/basead/d/a/a$a;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    .line 82
    iget-object v0, p0, Lcom/tkay/basead/d/a/a$1;->c:Lcom/tkay/basead/d/a/a;

    iget-object v1, p0, Lcom/tkay/basead/d/a/a$1;->a:Lcom/tkay/core/common/f/i;

    iget-object v2, p0, Lcom/tkay/basead/d/a/a$1;->b:Lcom/tkay/basead/d/a/a$a;

    invoke-static {v0, v1, v2}, Lcom/tkay/basead/d/a/a;->a(Lcom/tkay/basead/d/a/a;Lcom/tkay/core/common/f/i;Lcom/tkay/basead/d/a/a$a;)V

    return-void
.end method
