.class public Lcom/mbridge/msdk/foundation/tools/h;
.super Ljava/lang/Object;
.source "DomainSameTool.java"


# direct methods
.method public static a(I)Ljava/lang/String;
    .locals 5

    const-string v0, ""

    .line 176
    :try_start_0
    new-instance v1, Lorg/json/JSONArray;

    invoke-direct {v1}, Lorg/json/JSONArray;-><init>()V

    .line 177
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->i()Ljava/util/List;

    move-result-object v2

    if-eqz v2, :cond_2

    .line 178
    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v3

    if-lez v3, :cond_2

    .line 179
    invoke-interface {v2}, Ljava/util/List;->size()I

    move-result v3

    if-le v3, p0, :cond_1

    if-nez p0, :cond_0

    goto :goto_0

    :cond_0
    sub-int p0, v3, p0

    goto :goto_1

    :cond_1
    :goto_0
    const/4 p0, 0x0

    :goto_1
    if-ge p0, v3, :cond_2

    .line 182
    invoke-interface {v2, p0}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    invoke-virtual {v1, v4}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;

    add-int/lit8 p0, p0, 0x1

    goto :goto_1

    .line 186
    :cond_2
    invoke-virtual {v1}, Lorg/json/JSONArray;->length()I

    move-result p0

    if-lez p0, :cond_3

    .line 187
    invoke-static {v1}, Lcom/mbridge/msdk/foundation/tools/ae;->a(Lorg/json/JSONArray;)Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_2

    :catch_0
    move-exception p0

    .line 190
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_3
    :goto_2
    return-object v0
.end method

.method public static a(Landroid/content/Context;Lcom/mbridge/msdk/foundation/entity/CampaignEx;)V
    .locals 5

    const-string v0, "DomainSameTool"

    const-string v1, "updateInstallList \u5f00\u59cb \u66f4\u65b0\u672c\u673a\u5df2\u5b89\u88c5\u5e7f\u544a\u5217\u8868"

    .line 44
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    if-nez p0, :cond_0

    const-string p0, "updateInstallList \u5217\u8868\u4e3a\u7a7a \u4e0d\u505a\u66f4\u65b0\u672c\u673a\u5df2\u5b89\u88c5\u5e7f\u544a\u5217\u8868"

    .line 46
    invoke-static {v0, p0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    return-void

    .line 50
    :cond_0
    invoke-static {p0}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object v1

    invoke-static {v1}, Lcom/mbridge/msdk/foundation/db/l;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/l;

    move-result-object v1

    const/4 v2, 0x0

    if-eqz p1, :cond_3

    .line 52
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPackageName()Ljava/lang/String;

    move-result-object v3

    invoke-static {p0, v3}, Lcom/mbridge/msdk/foundation/tools/ae;->c(Landroid/content/Context;Ljava/lang/String;)Z

    move-result p0

    if-eqz p0, :cond_2

    .line 53
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->e()Ljava/util/Set;

    move-result-object p0

    if-eqz p0, :cond_1

    .line 54
    new-instance p0, Lcom/mbridge/msdk/foundation/entity/i;

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPackageName()Ljava/lang/String;

    move-result-object p1

    invoke-direct {p0, v1, p1}, Lcom/mbridge/msdk/foundation/entity/i;-><init>(Ljava/lang/String;Ljava/lang/String;)V

    .line 55
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->e()Ljava/util/Set;

    move-result-object p1

    invoke-interface {p1, p0}, Ljava/util/Set;->add(Ljava/lang/Object;)Z

    :cond_1
    const/4 v2, 0x1

    goto :goto_0

    :cond_2
    if-eqz v1, :cond_3

    .line 59
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v1, p0}, Lcom/mbridge/msdk/foundation/db/l;->a(Ljava/lang/String;)Z

    move-result p0

    if-nez p0, :cond_3

    .line 60
    new-instance p0, Lcom/mbridge/msdk/foundation/entity/h;

    invoke-direct {p0}, Lcom/mbridge/msdk/foundation/entity/h;-><init>()V

    .line 61
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getId()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {p0, v3}, Lcom/mbridge/msdk/foundation/entity/h;->a(Ljava/lang/String;)V

    .line 62
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getFca()I

    move-result v3

    invoke-virtual {p0, v3}, Lcom/mbridge/msdk/foundation/entity/h;->a(I)V

    .line 63
    invoke-virtual {p1}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getFcb()I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/mbridge/msdk/foundation/entity/h;->b(I)V

    .line 64
    invoke-virtual {p0, v2}, Lcom/mbridge/msdk/foundation/entity/h;->d(I)V

    .line 65
    invoke-virtual {p0, v2}, Lcom/mbridge/msdk/foundation/entity/h;->c(I)V

    .line 66
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v3

    invoke-virtual {p0, v3, v4}, Lcom/mbridge/msdk/foundation/entity/h;->a(J)V

    .line 67
    invoke-virtual {v1, p0}, Lcom/mbridge/msdk/foundation/db/l;->a(Lcom/mbridge/msdk/foundation/entity/h;)V

    :cond_3
    :goto_0
    if-eqz v2, :cond_4

    const-string p0, "\u66f4\u65b0\u5b89\u88c5\u5217\u8868"

    .line 74
    invoke-static {v0, p0}, Lcom/mbridge/msdk/foundation/tools/z;->b(Ljava/lang/String;Ljava/lang/String;)V

    .line 75
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p0

    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/controller/a;->h()V

    :cond_4
    return-void
.end method

.method public static a(Ljava/util/List;)V
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/foundation/entity/CampaignEx;",
            ">;)V"
        }
    .end annotation

    if-eqz p0, :cond_3

    .line 203
    invoke-interface {p0}, Ljava/util/List;->size()I

    move-result v0

    if-nez v0, :cond_0

    goto :goto_1

    .line 206
    :cond_0
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    const/4 v1, 0x0

    .line 208
    invoke-interface {p0}, Ljava/util/List;->size()I

    move-result v2

    :goto_0
    if-ge v1, v2, :cond_2

    .line 209
    invoke-interface {p0, v1}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mbridge/msdk/foundation/entity/CampaignEx;

    .line 210
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v4

    invoke-virtual {v4}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v4

    .line 211
    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getPackageName()Ljava/lang/String;

    move-result-object v5

    .line 210
    invoke-static {v4, v5}, Lcom/mbridge/msdk/foundation/tools/ae;->c(Landroid/content/Context;Ljava/lang/String;)Z

    move-result v4

    if-nez v4, :cond_1

    .line 212
    invoke-virtual {v3}, Lcom/mbridge/msdk/foundation/entity/CampaignEx;->getOfferType()I

    move-result v4

    const/16 v5, 0x63

    if-ne v4, v5, :cond_1

    .line 213
    invoke-interface {v0, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_1
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    .line 217
    :cond_2
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object p0

    invoke-virtual {p0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object p0

    invoke-static {p0}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object p0

    invoke-static {p0}, Lcom/mbridge/msdk/foundation/db/p;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/p;

    move-result-object p0

    .line 218
    invoke-virtual {p0, v0}, Lcom/mbridge/msdk/foundation/db/p;->a(Ljava/util/List;)V

    :cond_3
    :goto_1
    return-void
.end method

.method public static a(Landroid/content/Context;)Z
    .locals 7

    const/4 v0, 0x0

    if-nez p0, :cond_0

    return v0

    .line 288
    :cond_0
    :try_start_0
    invoke-virtual {p0}, Landroid/content/Context;->getResources()Landroid/content/res/Resources;

    move-result-object p0

    const-string v1, "config_showNavigationBar"

    const-string v2, "bool"

    const-string v3, "android"

    .line 289
    invoke-virtual {p0, v1, v2, v3}, Landroid/content/res/Resources;->getIdentifier(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I

    move-result v1

    if-lez v1, :cond_1

    .line 291
    invoke-virtual {p0, v1}, Landroid/content/res/Resources;->getBoolean(I)Z

    move-result p0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_1

    goto :goto_0

    :cond_1
    move p0, v0

    :goto_0
    :try_start_1
    const-string v1, "android.os.SystemProperties"

    .line 293
    invoke-static {v1}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v1

    const-string v2, "get"

    const/4 v3, 0x1

    new-array v4, v3, [Ljava/lang/Class;

    .line 294
    const-class v5, Ljava/lang/String;

    aput-object v5, v4, v0

    invoke-virtual {v1, v2, v4}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v2

    new-array v4, v3, [Ljava/lang/Object;

    const-string v5, "qemu.hw.mainkeys"

    aput-object v5, v4, v0

    .line 295
    invoke-virtual {v2, v1, v4}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/String;

    const-string v2, "1"

    .line 296
    invoke-virtual {v2, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_2

    goto :goto_2

    :cond_2
    const-string v0, "0"

    .line 298
    invoke-virtual {v0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0
    :try_end_1
    .catchall {:try_start_1 .. :try_end_1} :catchall_0

    if-eqz v0, :cond_3

    move v0, v3

    goto :goto_2

    :cond_3
    move v0, p0

    goto :goto_2

    :catchall_0
    move-exception v0

    move-object v6, v0

    move v0, p0

    move-object p0, v6

    goto :goto_1

    :catchall_1
    move-exception p0

    .line 302
    :goto_1
    invoke-virtual {p0}, Ljava/lang/Throwable;->getMessage()Ljava/lang/String;

    move-result-object v1

    const-string v2, "DomainSameTool"

    invoke-static {v2, v1, p0}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V

    :goto_2
    return v0
.end method
