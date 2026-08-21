.class public abstract Lcom/tkay/expressad/foundation/g/f/b/b;
.super Lcom/tkay/expressad/foundation/g/f/f;


# annotations
.annotation system Ldalvik/annotation/Signature;
    value = {
        "Lcom/tkay/expressad/foundation/g/f/f<",
        "Ljava/lang/String;",
        ">;"
    }
.end annotation


# static fields
.field private static final a:Ljava/lang/String;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 9
    const-class v0, Lcom/tkay/expressad/foundation/g/f/b/b;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/expressad/foundation/g/f/b/b;->a:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 8
    invoke-direct {p0}, Lcom/tkay/expressad/foundation/g/f/f;-><init>()V

    return-void
.end method


# virtual methods
.method public final a(Lcom/tkay/expressad/foundation/g/f/a/a;)V
    .locals 0

    .line 20
    invoke-static {p1}, Lcom/tkay/expressad/foundation/g/f/g/a;->a(Lcom/tkay/expressad/foundation/g/f/a/a;)Ljava/lang/String;

    return-void
.end method

.method public final a(Lcom/tkay/expressad/foundation/g/f/k;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Lcom/tkay/expressad/foundation/g/f/k<",
            "Ljava/lang/String;",
            ">;)V"
        }
    .end annotation

    if-eqz p1, :cond_0

    .line 14
    iget-object p1, p1, Lcom/tkay/expressad/foundation/g/f/k;->a:Ljava/lang/Object;

    check-cast p1, Ljava/lang/String;

    invoke-virtual {p0, p1}, Lcom/tkay/expressad/foundation/g/f/b/b;->a(Ljava/lang/String;)V

    :cond_0
    return-void
.end method

.method public abstract a(Ljava/lang/String;)V
.end method

.method public abstract f()V
.end method
