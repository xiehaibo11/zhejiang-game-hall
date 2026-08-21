.class final Lcom/tkay/expressad/foundation/g/d/b$2;
.super Ljava/lang/Object;

# interfaces
.implements Lcom/tkay/expressad/foundation/g/d/d$a;


# annotations
.annotation system Ldalvik/annotation/EnclosingMethod;
    value = Lcom/tkay/expressad/foundation/g/d/b;->a(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Z)Lcom/tkay/expressad/foundation/g/d/d;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x0
    name = null
.end annotation


# instance fields
.field final synthetic a:Ljava/lang/String;

.field final synthetic b:Lcom/tkay/expressad/foundation/g/d/b;


# direct methods
.method constructor <init>(Lcom/tkay/expressad/foundation/g/d/b;Ljava/lang/String;)V
    .locals 0

    .line 197
    iput-object p1, p0, Lcom/tkay/expressad/foundation/g/d/b$2;->b:Lcom/tkay/expressad/foundation/g/d/b;

    iput-object p2, p0, Lcom/tkay/expressad/foundation/g/d/b$2;->a:Ljava/lang/String;

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 209
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v0

    new-instance v1, Lcom/tkay/expressad/foundation/g/d/b$2$1;

    invoke-direct {v1, p0, p2, p1}, Lcom/tkay/expressad/foundation/g/d/b$2$1;-><init>(Lcom/tkay/expressad/foundation/g/d/b$2;Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    return-void
.end method

.method public final b(Ljava/lang/String;Ljava/lang/String;)V
    .locals 2

    .line 236
    invoke-static {}, Lcom/tkay/core/common/l/b/a;->a()Lcom/tkay/core/common/l/b/a;

    move-result-object v0

    new-instance v1, Lcom/tkay/expressad/foundation/g/d/b$2$2;

    invoke-direct {v1, p0, p1, p2}, Lcom/tkay/expressad/foundation/g/d/b$2$2;-><init>(Lcom/tkay/expressad/foundation/g/d/b$2;Ljava/lang/String;Ljava/lang/String;)V

    invoke-virtual {v0, v1}, Lcom/tkay/core/common/l/b/a;->a(Ljava/lang/Runnable;)V

    return-void
.end method
