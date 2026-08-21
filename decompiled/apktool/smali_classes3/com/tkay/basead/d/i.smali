.class public Lcom/tkay/basead/d/i;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/basead/d/i$a;
    }
.end annotation


# static fields
.field public static final a:Ljava/lang/String;


# instance fields
.field private b:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/tkay/core/api/BaseAd;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 17
    const-class v0, Lcom/tkay/basead/d/i;

    invoke-virtual {v0}, Ljava/lang/Class;->getSimpleName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/tkay/basead/d/i;->a:Ljava/lang/String;

    return-void
.end method

.method private constructor <init>()V
    .locals 2

    .line 19
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 20
    new-instance v0, Ljava/util/HashMap;

    const/4 v1, 0x2

    invoke-direct {v0, v1}, Ljava/util/HashMap;-><init>(I)V

    iput-object v0, p0, Lcom/tkay/basead/d/i;->b:Ljava/util/Map;

    return-void
.end method

.method synthetic constructor <init>(B)V
    .locals 0

    .line 15
    invoke-direct {p0}, Lcom/tkay/basead/d/i;-><init>()V

    return-void
.end method

.method public static a()Lcom/tkay/basead/d/i;
    .locals 1

    .line 24
    invoke-static {}, Lcom/tkay/basead/d/i$a;->a()Lcom/tkay/basead/d/i;

    move-result-object v0

    return-object v0
.end method


# virtual methods
.method public final a(Ljava/lang/String;)Lcom/tkay/core/api/BaseAd;
    .locals 1

    .line 38
    iget-object v0, p0, Lcom/tkay/basead/d/i;->b:Ljava/util/Map;

    invoke-interface {v0, p1}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Lcom/tkay/core/api/BaseAd;

    return-object p1
.end method

.method public final a(Ljava/lang/String;Lcom/tkay/core/api/BaseAd;)V
    .locals 1

    .line 34
    iget-object v0, p0, Lcom/tkay/basead/d/i;->b:Ljava/util/Map;

    invoke-interface {v0, p1, p2}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-void
.end method
