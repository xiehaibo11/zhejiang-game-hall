.class public Lcom/tkay/expressad/foundation/g/g/b;
.super Ljava/lang/Object;


# static fields
.field private static final a:Ljava/lang/String;

.field private static b:Ljava/util/WeakHashMap;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/WeakHashMap<",
            "Landroid/content/Context;",
            "Lcom/tkay/expressad/foundation/g/g/c;",
            ">;"
        }
    .end annotation
.end field


# instance fields
.field private c:Lcom/tkay/expressad/foundation/g/g/c;

.field private d:Landroid/content/Context;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 8
    const-class v0, Lcom/tkay/expressad/foundation/g/g/b;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/expressad/foundation/g/g/b;->a:Ljava/lang/String;

    .line 9
    new-instance v0, Ljava/util/WeakHashMap;

    invoke-direct {v0}, Ljava/util/WeakHashMap;-><init>()V

    sput-object v0, Lcom/tkay/expressad/foundation/g/g/b;->b:Ljava/util/WeakHashMap;

    return-void
.end method

.method private constructor <init>(Landroid/content/Context;)V
    .locals 2

    .line 14
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 15
    iput-object p1, p0, Lcom/tkay/expressad/foundation/g/g/b;->d:Landroid/content/Context;

    .line 16
    sget-object v0, Lcom/tkay/expressad/foundation/g/g/b;->b:Ljava/util/WeakHashMap;

    invoke-virtual {v0, p1}, Ljava/util/WeakHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 17
    sget-object p1, Lcom/tkay/expressad/foundation/g/g/b;->b:Ljava/util/WeakHashMap;

    iget-object v0, p0, Lcom/tkay/expressad/foundation/g/g/b;->d:Landroid/content/Context;

    invoke-virtual {p1, v0}, Ljava/util/WeakHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/expressad/foundation/g/g/c;

    iput-object p1, p0, Lcom/tkay/expressad/foundation/g/g/b;->c:Lcom/tkay/expressad/foundation/g/g/c;

    return-void

    .line 19
    :cond_0
    new-instance p1, Lcom/tkay/expressad/foundation/g/g/c;

    iget-object v0, p0, Lcom/tkay/expressad/foundation/g/g/b;->d:Landroid/content/Context;

    const/4 v1, 0x5

    invoke-direct {p1, v0, v1}, Lcom/tkay/expressad/foundation/g/g/c;-><init>(Landroid/content/Context;I)V

    iput-object p1, p0, Lcom/tkay/expressad/foundation/g/g/b;->c:Lcom/tkay/expressad/foundation/g/g/c;

    .line 20
    sget-object v0, Lcom/tkay/expressad/foundation/g/g/b;->b:Ljava/util/WeakHashMap;

    iget-object v1, p0, Lcom/tkay/expressad/foundation/g/g/b;->d:Landroid/content/Context;

    invoke-virtual {v0, v1, p1}, Ljava/util/WeakHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method

.method private a(Lcom/tkay/expressad/foundation/g/g/a;)V
    .locals 1

    .line 25
    iget-object v0, p0, Lcom/tkay/expressad/foundation/g/g/b;->c:Lcom/tkay/expressad/foundation/g/g/c;

    invoke-virtual {v0, p1}, Lcom/tkay/expressad/foundation/g/g/c;->a(Lcom/tkay/expressad/foundation/g/g/a;)V

    return-void
.end method
