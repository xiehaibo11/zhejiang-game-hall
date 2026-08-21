.class public final Lcom/mbridge/msdk/foundation/entity/i;
.super Ljava/lang/Object;
.source "InstallApp.java"


# instance fields
.field private a:Ljava/lang/String;

.field private b:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 15
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public constructor <init>(Ljava/lang/String;Ljava/lang/String;)V
    .locals 0

    .line 19
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 20
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/i;->a:Ljava/lang/String;

    .line 21
    iput-object p2, p0, Lcom/mbridge/msdk/foundation/entity/i;->b:Ljava/lang/String;

    return-void
.end method

.method public static a(Ljava/util/Set;)Ljava/lang/String;
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Set<",
            "Lcom/mbridge/msdk/foundation/entity/i;",
            ">;)",
            "Ljava/lang/String;"
        }
    .end annotation

    if-eqz p0, :cond_1

    .line 55
    :try_start_0
    invoke-interface {p0}, Ljava/util/Set;->size()I

    move-result v0

    if-lez v0, :cond_1

    const-string v0, "[{$native_info}]"

    .line 57
    new-instance v1, Ljava/lang/StringBuffer;

    invoke-direct {v1}, Ljava/lang/StringBuffer;-><init>()V

    .line 58
    invoke-interface {p0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :goto_0
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v2
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const-string v3, ","

    if-eqz v2, :cond_0

    :try_start_1
    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v2

    check-cast v2, Lcom/mbridge/msdk/foundation/entity/i;

    const-string v4, "{\"campaignId\":"

    .line 59
    invoke-virtual {v1, v4}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    .line 1025
    iget-object v5, v2, Lcom/mbridge/msdk/foundation/entity/i;->a:Ljava/lang/String;

    .line 60
    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    const-string v3, "\"packageName\":"

    .line 61
    invoke-virtual {v1, v3}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    .line 1033
    iget-object v2, v2, Lcom/mbridge/msdk/foundation/entity/i;->b:Ljava/lang/String;

    .line 62
    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v2, "},"

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    goto :goto_0

    :cond_0
    const-string p0, "{$native_info}"

    const/4 v2, 0x0

    .line 67
    invoke-virtual {v1, v3}, Ljava/lang/StringBuffer;->lastIndexOf(Ljava/lang/String;)I

    move-result v3

    .line 66
    invoke-virtual {v1, v2, v3}, Ljava/lang/StringBuffer;->subSequence(II)Ljava/lang/CharSequence;

    move-result-object v1

    .line 64
    invoke-virtual {v0, p0, v1}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object p0
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    return-object p0

    :catch_0
    :cond_1
    const/4 p0, 0x0

    return-object p0
.end method


# virtual methods
.method public final a()Ljava/lang/String;
    .locals 1

    .line 25
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/i;->a:Ljava/lang/String;

    return-object v0
.end method

.method public final a(Ljava/lang/String;)V
    .locals 0

    .line 29
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/i;->a:Ljava/lang/String;

    return-void
.end method

.method public final b()Ljava/lang/String;
    .locals 1

    .line 33
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/i;->b:Ljava/lang/String;

    return-object v0
.end method

.method public final b(Ljava/lang/String;)V
    .locals 0

    .line 37
    iput-object p1, p0, Lcom/mbridge/msdk/foundation/entity/i;->b:Ljava/lang/String;

    return-void
.end method

.method public final equals(Ljava/lang/Object;)Z
    .locals 4

    const/4 v0, 0x1

    if-ne p0, p1, :cond_0

    return v0

    :cond_0
    const/4 v1, 0x0

    if-nez p1, :cond_1

    return v1

    .line 104
    :cond_1
    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v2

    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v3

    if-eq v2, v3, :cond_2

    return v1

    .line 106
    :cond_2
    check-cast p1, Lcom/mbridge/msdk/foundation/entity/i;

    .line 107
    iget-object v2, p0, Lcom/mbridge/msdk/foundation/entity/i;->a:Ljava/lang/String;

    if-nez v2, :cond_3

    .line 108
    iget-object v2, p1, Lcom/mbridge/msdk/foundation/entity/i;->a:Ljava/lang/String;

    if-eqz v2, :cond_4

    return v1

    .line 110
    :cond_3
    iget-object v3, p1, Lcom/mbridge/msdk/foundation/entity/i;->a:Ljava/lang/String;

    invoke-virtual {v2, v3}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-nez v2, :cond_4

    return v1

    .line 112
    :cond_4
    iget-object v2, p0, Lcom/mbridge/msdk/foundation/entity/i;->b:Ljava/lang/String;

    if-nez v2, :cond_5

    .line 113
    iget-object p1, p1, Lcom/mbridge/msdk/foundation/entity/i;->b:Ljava/lang/String;

    if-eqz p1, :cond_6

    return v1

    .line 115
    :cond_5
    iget-object p1, p1, Lcom/mbridge/msdk/foundation/entity/i;->b:Ljava/lang/String;

    invoke-virtual {v2, p1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-nez p1, :cond_6

    return v1

    :cond_6
    return v0
.end method

.method public final hashCode()I
    .locals 3

    .line 91
    iget-object v0, p0, Lcom/mbridge/msdk/foundation/entity/i;->a:Ljava/lang/String;

    const/4 v1, 0x0

    if-nez v0, :cond_0

    move v0, v1

    goto :goto_0

    .line 92
    :cond_0
    invoke-virtual {v0}, Ljava/lang/String;->hashCode()I

    move-result v0

    :goto_0
    const/16 v2, 0x1f

    add-int/2addr v0, v2

    mul-int/2addr v0, v2

    .line 93
    iget-object v2, p0, Lcom/mbridge/msdk/foundation/entity/i;->b:Ljava/lang/String;

    if-nez v2, :cond_1

    goto :goto_1

    .line 94
    :cond_1
    invoke-virtual {v2}, Ljava/lang/String;->hashCode()I

    move-result v1

    :goto_1
    add-int/2addr v0, v1

    return v0
.end method
