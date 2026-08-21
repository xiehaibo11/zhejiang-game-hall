.class final Lcom/tkay/basead/d/g$1$1$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/d/g$1$1;->a(Lcom/tkay/expressad/foundation/d/c;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/foundation/d/c;

.field final synthetic b:Lcom/tkay/basead/d/g$1$1;


# direct methods
.method constructor <init>(Lcom/tkay/basead/d/g$1$1;Lcom/tkay/expressad/foundation/d/c;)V
    .locals 0

    .line 74
    iput-object p1, p0, Lcom/tkay/basead/d/g$1$1$1;->b:Lcom/tkay/basead/d/g$1$1;

    iput-object p2, p0, Lcom/tkay/basead/d/g$1$1$1;->a:Lcom/tkay/expressad/foundation/d/c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    .line 77
    iget-object v0, p0, Lcom/tkay/basead/d/g$1$1$1;->b:Lcom/tkay/basead/d/g$1$1;

    iget-object v0, v0, Lcom/tkay/basead/d/g$1$1;->a:Lcom/tkay/basead/d/g$1;

    iget-object v0, v0, Lcom/tkay/basead/d/g$1;->b:Lcom/tkay/basead/d/g;

    iget-object v1, p0, Lcom/tkay/basead/d/g$1$1$1;->a:Lcom/tkay/expressad/foundation/d/c;

    const-string v2, ""

    invoke-virtual {v0, v1, v2}, Lcom/tkay/basead/d/g;->a(Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;)V

    return-void
.end method
