.class final Lcom/tkay/expressad/advanced/d/c$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/advanced/c/c$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/advanced/d/c;->g()V
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:[Lcom/tkay/expressad/foundation/d/c;

.field final synthetic b:Lcom/tkay/expressad/advanced/d/c;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/advanced/d/c;[Lcom/tkay/expressad/foundation/d/c;)V
    .locals 0

    .line 267
    iput-object p1, p0, Lcom/tkay/expressad/advanced/d/c$2;->b:Lcom/tkay/expressad/advanced/d/c;

    iput-object p2, p0, Lcom/tkay/expressad/advanced/d/c$2;->a:[Lcom/tkay/expressad/foundation/d/c;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a()V
    .locals 3

    .line 270
    invoke-static {}, Lcom/tkay/expressad/advanced/d/c;->f()Ljava/lang/String;

    .line 271
    iget-object v0, p0, Lcom/tkay/expressad/advanced/d/c$2;->b:Lcom/tkay/expressad/advanced/d/c;

    iget-object v1, p0, Lcom/tkay/expressad/advanced/d/c$2;->a:[Lcom/tkay/expressad/foundation/d/c;

    const/4 v2, 0x0

    aget-object v1, v1, v2

    invoke-virtual {v0, v1, v2}, Lcom/tkay/expressad/advanced/d/c;->a(Lcom/tkay/expressad/foundation/d/c;Z)V

    return-void
.end method

.method public final b()V
    .locals 2

    .line 276
    iget-object v0, p0, Lcom/tkay/expressad/advanced/d/c$2;->b:Lcom/tkay/expressad/advanced/d/c;

    const/4 v1, 0x0

    iput-boolean v1, v0, Lcom/tkay/expressad/advanced/d/c;->e:Z

    return-void
.end method
