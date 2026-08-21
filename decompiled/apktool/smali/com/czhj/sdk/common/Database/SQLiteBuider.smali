.class public Lcom/czhj/sdk/common/Database/SQLiteBuider;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/czhj/sdk/common/Database/SQLiteBuider$CreateTable;,
        Lcom/czhj/sdk/common/Database/SQLiteBuider$Update;,
        Lcom/czhj/sdk/common/Database/SQLiteBuider$Insert;,
        Lcom/czhj/sdk/common/Database/SQLiteBuider$CreateTriggerBuilder;
    }
.end annotation


# static fields
.field private static final a:Ljava/lang/String; = "SQLiteBuider"

.field private static b:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method static synthetic a(Ljava/util/Map;)Ljava/util/List;
    .locals 0

    invoke-static {p0}, Lcom/czhj/sdk/common/Database/SQLiteBuider;->b(Ljava/util/Map;)Ljava/util/List;

    move-result-object p0

    return-object p0
.end method

.method private static b(Ljava/util/Map;)Ljava/util/List;
    .locals 11
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ">;)",
            "Ljava/util/List<",
            "Ljava/lang/String;",
            ">;"
        }
    .end annotation

    new-instance v0, Ljava/util/ArrayList;

    invoke-interface {p0}, Ljava/util/Map;->size()I

    move-result v1

    invoke-direct {v0, v1}, Ljava/util/ArrayList;-><init>(I)V

    invoke-interface {p0}, Ljava/util/Map;->keySet()Ljava/util/Set;

    move-result-object v1

    invoke-interface {v1}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object v1

    :goto_0
    invoke-interface {v1}, Ljava/util/Iterator;->hasNext()Z

    move-result v2

    if-eqz v2, :cond_3

    invoke-interface {v1}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Ljava/lang/String;

    invoke-interface {p0, v2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/lang/String;

    invoke-virtual {v3}, Ljava/lang/String;->toLowerCase()Ljava/lang/String;

    move-result-object v3

    const/4 v4, -0x1

    invoke-virtual {v3}, Ljava/lang/String;->hashCode()I

    move-result v5

    const/4 v6, 0x0

    const-string v7, "text"

    const/4 v8, 0x3

    const/4 v9, 0x2

    const/4 v10, 0x1

    sparse-switch v5, :sswitch_data_0

    goto :goto_1

    :sswitch_0
    const-string v5, "java.lang.string"

    invoke-virtual {v3, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_0

    move v4, v9

    goto :goto_1

    :sswitch_1
    invoke-virtual {v3, v7}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_0

    move v4, v8

    goto :goto_1

    :sswitch_2
    const-string v5, "long"

    invoke-virtual {v3, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_0

    move v4, v10

    goto :goto_1

    :sswitch_3
    const-string v5, "int"

    invoke-virtual {v3, v5}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_0

    move v4, v6

    :cond_0
    :goto_1
    if-eqz v4, :cond_1

    if-eq v4, v10, :cond_1

    if-eq v4, v9, :cond_2

    if-eq v4, v8, :cond_2

    const-string v7, "blob"

    goto :goto_2

    :cond_1
    const-string v7, "integer"

    :cond_2
    :goto_2
    new-array v3, v9, [Ljava/lang/Object;

    aput-object v2, v3, v6

    aput-object v7, v3, v10

    const-string v2, "%s %s "

    invoke-static {v2, v3}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v2

    invoke-interface {v0, v2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    :cond_3
    return-object v0

    nop

    :sswitch_data_0
    .sparse-switch
        0x197ef -> :sswitch_3
        0x32c67c -> :sswitch_2
        0x36452d -> :sswitch_1
        0x7dd94a45 -> :sswitch_0
    .end sparse-switch
.end method
