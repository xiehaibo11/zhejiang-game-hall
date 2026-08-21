.class Lcom/cmic/gen/sdk/d/a$a;
.super Ljava/util/HashMap;
.source "EventUtils.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/cmic/gen/sdk/d/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0xa
    name = "a"
.end annotation

.annotation system Ldalvik/annotation/Signature;
    value = {
        "<K:",
        "Ljava/lang/Object;",
        "V:",
        "Ljava/lang/Object;",
        ">",
        "Ljava/util/HashMap<",
        "TK;TV;>;"
    }
.end annotation


# direct methods
.method private constructor <init>()V
    .locals 0

    .line 122
    invoke-direct {p0}, Ljava/util/HashMap;-><init>()V

    return-void
.end method

.method synthetic constructor <init>(Lcom/cmic/gen/sdk/d/a$1;)V
    .locals 0

    .line 122
    invoke-direct {p0}, Lcom/cmic/gen/sdk/d/a$a;-><init>()V

    return-void
.end method


# virtual methods
.method public a(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    .locals 1
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/Object;",
            "TV;)TV;"
        }
    .end annotation

    .line 125
    invoke-virtual {p0, p1}, Lcom/cmic/gen/sdk/d/a$a;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    invoke-virtual {p0, p1}, Lcom/cmic/gen/sdk/d/a$a;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 126
    invoke-virtual {p0, p1}, Lcom/cmic/gen/sdk/d/a$a;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    return-object p1

    :cond_0
    return-object p2
.end method
