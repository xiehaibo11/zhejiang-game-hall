.class public final Lcom/tkay/core/common/l/i;
.super Ljava/lang/Object;


# static fields
.field protected static a:Lcom/tkay/core/common/l/i;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 22
    new-instance v0, Lcom/tkay/core/common/l/i;

    invoke-direct {v0}, Lcom/tkay/core/common/l/i;-><init>()V

    sput-object v0, Lcom/tkay/core/common/l/i;->a:Lcom/tkay/core/common/l/i;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 20
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a(Lcom/tkay/core/common/f/aj;)Lcom/tkay/core/api/TYBaseAdAdapter;
    .locals 0

    .line 49
    :try_start_0
    invoke-virtual {p0}, Lcom/tkay/core/common/f/aj;->h()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/tkay/core/common/l/i;->a(Ljava/lang/String;)Lcom/tkay/core/api/TYBaseAdAdapter;

    move-result-object p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object p0

    :catchall_0
    move-exception p0

    .line 52
    invoke-virtual {p0}, Ljava/lang/Throwable;->printStackTrace()V

    const/4 p0, 0x0

    return-object p0
.end method

.method private static a(Ljava/lang/Class;)Lcom/tkay/core/api/TYBaseAdAdapter;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/Class<",
            "+",
            "Lcom/tkay/core/common/b/n;",
            ">;)",
            "Lcom/tkay/core/api/TYBaseAdAdapter;"
        }
    .end annotation

    if-nez p0, :cond_0

    const-string v0, "tkay"

    const-string v1, "can not find adapter"

    .line 37
    invoke-static {v0, v1}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    :cond_0
    const/4 v0, 0x0

    .line 40
    check-cast v0, [Ljava/lang/Class;

    invoke-virtual {p0, v0}, Ljava/lang/Class;->getDeclaredConstructor([Ljava/lang/Class;)Ljava/lang/reflect/Constructor;

    move-result-object p0

    const/4 v0, 0x1

    .line 41
    invoke-virtual {p0, v0}, Ljava/lang/reflect/Constructor;->setAccessible(Z)V

    const/4 v0, 0x0

    new-array v0, v0, [Ljava/lang/Object;

    .line 42
    invoke-virtual {p0, v0}, Ljava/lang/reflect/Constructor;->newInstance([Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/tkay/core/api/TYBaseAdAdapter;

    return-object p0
.end method

.method public static a(Ljava/lang/String;)Lcom/tkay/core/api/TYBaseAdAdapter;
    .locals 3

    const/4 v0, 0x0

    if-eqz p0, :cond_1

    .line 26
    invoke-static {p0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object p0

    const-class v1, Lcom/tkay/core/api/TYBaseAdAdapter;

    .line 27
    invoke-virtual {p0, v1}, Ljava/lang/Class;->asSubclass(Ljava/lang/Class;)Ljava/lang/Class;

    move-result-object p0

    if-nez p0, :cond_0

    const-string v1, "tkay"

    const-string v2, "can not find adapter"

    .line 1037
    invoke-static {v1, v2}, Landroid/util/Log;->w(Ljava/lang/String;Ljava/lang/String;)I

    .line 1040
    :cond_0
    check-cast v0, [Ljava/lang/Class;

    invoke-virtual {p0, v0}, Ljava/lang/Class;->getDeclaredConstructor([Ljava/lang/Class;)Ljava/lang/reflect/Constructor;

    move-result-object p0

    const/4 v0, 0x1

    .line 1041
    invoke-virtual {p0, v0}, Ljava/lang/reflect/Constructor;->setAccessible(Z)V

    const/4 v0, 0x0

    new-array v0, v0, [Ljava/lang/Object;

    .line 1042
    invoke-virtual {p0, v0}, Ljava/lang/reflect/Constructor;->newInstance([Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/tkay/core/api/TYBaseAdAdapter;

    return-object p0

    :cond_1
    return-object v0
.end method
