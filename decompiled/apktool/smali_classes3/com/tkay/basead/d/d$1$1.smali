.class final Lcom/tkay/basead/d/d$1$1;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/lang/Runnable;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/basead/d/d$1;->a(Lcom/tkay/expressad/foundation/d/c;)V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Lcom/tkay/expressad/foundation/d/c;

.field final synthetic b:Lcom/tkay/basead/d/d$1;


# direct methods
.method constructor <init>(Lcom/tkay/basead/d/d$1;Lcom/tkay/expressad/foundation/d/c;)V
    .locals 0

    .line 102
    iput-object p1, p0, Lcom/tkay/basead/d/d$1$1;->b:Lcom/tkay/basead/d/d$1;

    iput-object p2, p0, Lcom/tkay/basead/d/d$1$1;->a:Lcom/tkay/expressad/foundation/d/c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final run()V
    .locals 3

    .line 105
    iget-object v0, p0, Lcom/tkay/basead/d/d$1$1;->b:Lcom/tkay/basead/d/d$1;

    iget-object v0, v0, Lcom/tkay/basead/d/d$1;->b:Lcom/tkay/basead/d/d;

    iget-object v1, p0, Lcom/tkay/basead/d/d$1$1;->a:Lcom/tkay/expressad/foundation/d/c;

    iget-object v2, p0, Lcom/tkay/basead/d/d$1$1;->b:Lcom/tkay/basead/d/d$1;

    iget-object v2, v2, Lcom/tkay/basead/d/d$1;->a:Ljava/lang/String;

    invoke-virtual {v0, v1, v2}, Lcom/tkay/basead/d/d;->a(Lcom/tkay/expressad/foundation/d/c;Ljava/lang/String;)V

    return-void
.end method
