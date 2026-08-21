.class public final Lcom/tkay/core/common/l/g;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/tkay/core/common/l/g$a;
    }
.end annotation


# static fields
.field static a:Ljava/util/Random;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 508
    new-instance v0, Ljava/util/Random;

    invoke-direct {v0}, Ljava/util/Random;-><init>()V

    sput-object v0, Lcom/tkay/core/common/l/g;->a:Ljava/util/Random;

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 43
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a(Lcom/tkay/core/common/f/aj;)D
    .locals 2

    if-eqz p0, :cond_1

    .line 385
    invoke-virtual {p0}, Lcom/tkay/core/common/f/aj;->Z()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 386
    invoke-static {}, Lcom/tkay/core/b/c;->a()Lcom/tkay/core/b/c;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/tkay/core/b/c;->b(Lcom/tkay/core/common/f/aj;)D

    move-result-wide v0

    return-wide v0

    .line 389
    :cond_0
    invoke-virtual {p0}, Lcom/tkay/core/common/f/aj;->af()D

    move-result-wide v0

    return-wide v0

    :cond_1
    const-wide/16 v0, 0x0

    return-wide v0
.end method

.method private static a(I[II)I
    .locals 3

    if-nez p1, :cond_0

    return p2

    .line 500
    :cond_0
    array-length v0, p1

    const/4 v1, 0x0

    :goto_0
    if-ge v1, v0, :cond_2

    aget v2, p1, v1

    if-ne p0, v2, :cond_1

    return p0

    :cond_1
    add-int/lit8 v1, v1, 0x1

    goto :goto_0

    :cond_2
    return p2
.end method

.method public static a()Ljava/lang/String;
    .locals 2

    const-string v0, "UA_6.1.74"

    .line 424
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    const-string v0, "UA_0.0.0"

    :cond_0
    return-object v0
.end method

.method public static a(Landroid/content/Context;)Ljava/lang/String;
    .locals 4

    .line 180
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->w()Ljava/lang/String;

    move-result-object v0

    .line 182
    new-instance v1, Ljava/lang/StringBuffer;

    invoke-direct {v1}, Ljava/lang/StringBuffer;-><init>()V

    .line 183
    invoke-static {p0}, Lcom/tkay/core/common/l/d;->d(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v1, p0}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    const-string p0, "&"

    .line 184
    invoke-virtual {v1, p0}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    .line 185
    invoke-static {}, Lcom/tkay/core/common/l/d;->f()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    .line 186
    invoke-virtual {v1, p0}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    .line 187
    invoke-virtual {v1, v0}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    .line 188
    invoke-virtual {v1, p0}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    .line 189
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v2

    invoke-virtual {v1, v2, v3}, Ljava/lang/StringBuffer;->append(J)Ljava/lang/StringBuffer;

    .line 190
    invoke-virtual {v1, p0}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    .line 191
    new-instance p0, Ljava/util/Random;

    invoke-direct {p0}, Ljava/util/Random;-><init>()V

    const/16 v0, 0x2710

    invoke-virtual {p0, v0}, Ljava/util/Random;->nextInt(I)I

    move-result p0

    invoke-virtual {v1, p0}, Ljava/lang/StringBuffer;->append(I)Ljava/lang/StringBuffer;

    .line 193
    invoke-virtual {v1}, Ljava/lang/StringBuffer;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/tkay/core/common/l/f;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static a(Lcom/tkay/core/common/f/h;)Ljava/lang/String;
    .locals 2

    .line 432
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Lcom/tkay/core/common/f/h;->p()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Lcom/tkay/core/common/f/h;->A()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/tkay/core/common/l/f;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static a(Ljava/lang/String;Ljava/lang/String;J)Ljava/lang/String;
    .locals 1

    .line 105
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, "_"

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p2, p3}, Ljava/lang/StringBuilder;->append(J)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static a(Ljava/util/List;)Ljava/util/List;
    .locals 11
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/aj;",
            ">;)",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/aj;",
            ">;"
        }
    .end annotation

    .line 517
    new-instance v0, Ljava/util/LinkedHashMap;

    invoke-direct {v0}, Ljava/util/LinkedHashMap;-><init>()V

    .line 518
    new-instance v1, Ljava/util/HashMap;

    const/4 v2, 0x3

    invoke-direct {v1, v2}, Ljava/util/HashMap;-><init>(I)V

    .line 519
    new-instance v2, Ljava/util/ArrayList;

    invoke-direct {v2}, Ljava/util/ArrayList;-><init>()V

    .line 521
    invoke-static {p0}, Ljava/util/Collections;->sort(Ljava/util/List;)V

    .line 523
    invoke-interface {p0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object p0

    :goto_0
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    const/4 v4, 0x0

    if-eqz v3, :cond_2

    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/tkay/core/common/f/aj;

    .line 524
    invoke-static {v3}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/aj;)D

    move-result-wide v5

    .line 525
    invoke-static {v5, v6}, Ljava/lang/String;->valueOf(D)Ljava/lang/String;

    move-result-object v7

    invoke-virtual {v0, v7}, Ljava/util/LinkedHashMap;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v7

    check-cast v7, Ljava/util/List;

    if-nez v7, :cond_0

    .line 527
    new-instance v7, Ljava/util/ArrayList;

    invoke-direct {v7}, Ljava/util/ArrayList;-><init>()V

    .line 528
    invoke-static {v5, v6}, Ljava/lang/String;->valueOf(D)Ljava/lang/String;

    move-result-object v8

    invoke-virtual {v0, v8, v7}, Ljava/util/LinkedHashMap;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 531
    :cond_0
    invoke-static {v5, v6}, Ljava/lang/String;->valueOf(D)Ljava/lang/String;

    move-result-object v8

    invoke-interface {v1, v8}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v8

    check-cast v8, Ljava/lang/Integer;

    if-nez v8, :cond_1

    .line 533
    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v8

    .line 535
    :cond_1
    invoke-virtual {v8}, Ljava/lang/Integer;->intValue()I

    move-result v4

    invoke-virtual {v3}, Lcom/tkay/core/common/f/aj;->S()I

    move-result v8

    add-int/2addr v4, v8

    invoke-static {v4}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v4

    .line 536
    invoke-static {v5, v6}, Ljava/lang/String;->valueOf(D)Ljava/lang/String;

    move-result-object v5

    invoke-interface {v1, v5, v4}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 538
    invoke-interface {v7, v3}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_0

    .line 541
    :cond_2
    invoke-virtual {v0}, Ljava/util/LinkedHashMap;->entrySet()Ljava/util/Set;

    move-result-object p0

    invoke-interface {p0}, Ljava/util/Set;->iterator()Ljava/util/Iterator;

    move-result-object p0

    .line 543
    :cond_3
    :goto_1
    invoke-interface {p0}, Ljava/util/Iterator;->hasNext()Z

    move-result v0

    if-eqz v0, :cond_8

    .line 544
    invoke-interface {p0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/Map$Entry;

    .line 545
    invoke-interface {v0}, Ljava/util/Map$Entry;->getValue()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Ljava/util/List;

    .line 546
    invoke-interface {v3}, Ljava/util/List;->size()I

    move-result v5

    const/4 v6, 0x1

    if-gt v5, v6, :cond_4

    .line 547
    invoke-interface {v2, v3}, Ljava/util/List;->addAll(Ljava/util/Collection;)Z

    goto :goto_1

    .line 550
    :cond_4
    invoke-interface {v0}, Ljava/util/Map$Entry;->getKey()Ljava/lang/Object;

    move-result-object v0

    invoke-interface {v1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/Integer;

    invoke-virtual {v0}, Ljava/lang/Integer;->intValue()I

    move-result v0

    .line 553
    :cond_5
    :goto_2
    invoke-interface {v3}, Ljava/util/List;->size()I

    move-result v5

    if-lez v5, :cond_3

    .line 554
    invoke-interface {v3}, Ljava/util/List;->size()I

    move-result v5

    if-ne v5, v6, :cond_6

    .line 555
    invoke-interface {v3, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Lcom/tkay/core/common/f/aj;

    invoke-interface {v2, v0}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 556
    invoke-interface {v3, v4}, Ljava/util/List;->remove(I)Ljava/lang/Object;

    goto :goto_1

    .line 560
    :cond_6
    sget-object v5, Lcom/tkay/core/common/l/g;->a:Ljava/util/Random;

    invoke-virtual {v5, v0}, Ljava/util/Random;->nextInt(I)I

    move-result v5

    add-int/2addr v5, v6

    .line 561
    invoke-interface {v3}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v7

    move v8, v4

    :goto_3
    invoke-interface {v7}, Ljava/util/Iterator;->hasNext()Z

    move-result v9

    if-eqz v9, :cond_5

    invoke-interface {v7}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v9

    check-cast v9, Lcom/tkay/core/common/f/aj;

    .line 562
    invoke-virtual {v9}, Lcom/tkay/core/common/f/aj;->S()I

    move-result v10

    add-int/2addr v10, v8

    if-lt v10, v5, :cond_7

    .line 563
    invoke-interface {v2, v9}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    .line 564
    invoke-interface {v3, v9}, Ljava/util/List;->remove(Ljava/lang/Object;)Z

    .line 565
    invoke-virtual {v9}, Lcom/tkay/core/common/f/aj;->S()I

    move-result v5

    sub-int/2addr v0, v5

    goto :goto_2

    .line 568
    :cond_7
    invoke-virtual {v9}, Lcom/tkay/core/common/f/aj;->S()I

    move-result v9

    add-int/2addr v8, v9

    goto :goto_3

    :cond_8
    return-object v2
.end method

.method public static a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;II)Lorg/json/JSONObject;
    .locals 5

    .line 141
    invoke-static {p0}, Lcom/tkay/core/a/a;->a(Landroid/content/Context;)Lcom/tkay/core/a/a;

    move-result-object p0

    invoke-virtual {p0, p3}, Lcom/tkay/core/a/a;->a(I)Ljava/util/Map;

    move-result-object p0

    const/4 p3, 0x0

    if-eqz p0, :cond_1

    .line 147
    invoke-interface {p0}, Ljava/util/Map;->values()Ljava/util/Collection;

    move-result-object v0

    invoke-interface {v0}, Ljava/util/Collection;->iterator()Ljava/util/Iterator;

    move-result-object v0

    move v1, p3

    move v2, v1

    :goto_0
    invoke-interface {v0}, Ljava/util/Iterator;->hasNext()Z

    move-result v3

    if-eqz v3, :cond_0

    invoke-interface {v0}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/tkay/core/common/f/ad;

    .line 148
    iget v4, v3, Lcom/tkay/core/common/f/ad;->c:I

    add-int/2addr v1, v4

    .line 149
    iget v3, v3, Lcom/tkay/core/common/f/ad;->d:I

    add-int/2addr v2, v3

    goto :goto_0

    .line 152
    :cond_0
    invoke-interface {p0, p2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/tkay/core/common/f/ad;

    goto :goto_1

    :cond_1
    const/4 p0, 0x0

    move v1, p3

    move v2, v1

    .line 156
    :goto_1
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    :try_start_0
    const-string v3, "sr"

    const-string v4, "tp"

    .line 158
    invoke-virtual {v0, v3, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v3, "rid"

    .line 159
    invoke-virtual {v0, v3, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "ads"

    .line 160
    invoke-virtual {v0, p1, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string p1, "ahs"

    .line 161
    invoke-virtual {v0, p1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string p1, "pds"

    if-eqz p0, :cond_2

    .line 162
    iget v1, p0, Lcom/tkay/core/common/f/ad;->c:I

    goto :goto_2

    :cond_2
    move v1, p3

    :goto_2
    invoke-virtual {v0, p1, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string p1, "phs"

    if-eqz p0, :cond_3

    .line 163
    iget p3, p0, Lcom/tkay/core/common/f/ad;->d:I

    :cond_3
    invoke-virtual {v0, p1, p3}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string p0, "ap"

    .line 164
    invoke-virtual {v0, p0, p4}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string p0, "tpl"

    .line 165
    invoke-virtual {v0, p0, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    :catch_0
    return-object v0
.end method

.method public static a(Landroid/webkit/WebView;)V
    .locals 3

    if-nez p0, :cond_0

    return-void

    :cond_0
    const-string v0, "searchBoxjavaBridge_"

    .line 372
    invoke-virtual {p0, v0}, Landroid/webkit/WebView;->removeJavascriptInterface(Ljava/lang/String;)V

    const-string v0, "accessibility"

    .line 373
    invoke-virtual {p0, v0}, Landroid/webkit/WebView;->removeJavascriptInterface(Ljava/lang/String;)V

    const-string v0, "accessibilityTraversal"

    .line 374
    invoke-virtual {p0, v0}, Landroid/webkit/WebView;->removeJavascriptInterface(Ljava/lang/String;)V

    .line 375
    invoke-virtual {p0}, Landroid/webkit/WebView;->getSettings()Landroid/webkit/WebSettings;

    move-result-object v0

    const/4 v1, 0x0

    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setAllowFileAccess(Z)V

    .line 376
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x10

    if-lt v0, v2, :cond_1

    .line 377
    invoke-virtual {p0}, Landroid/webkit/WebView;->getSettings()Landroid/webkit/WebSettings;

    move-result-object v0

    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setAllowFileAccessFromFileURLs(Z)V

    .line 378
    invoke-virtual {p0}, Landroid/webkit/WebView;->getSettings()Landroid/webkit/WebSettings;

    move-result-object v0

    invoke-virtual {v0, v1}, Landroid/webkit/WebSettings;->setAllowUniversalAccessFromFileURLs(Z)V

    .line 380
    :cond_1
    invoke-virtual {p0}, Landroid/webkit/WebView;->getSettings()Landroid/webkit/WebSettings;

    move-result-object p0

    invoke-virtual {p0, v1}, Landroid/webkit/WebSettings;->setSavePassword(Z)V

    return-void
.end method

.method public static a(Lcom/tkay/core/common/f/d;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
    .locals 3

    .line 311
    invoke-static {}, Lcom/tkay/core/api/TYSDK;->isNetworkLogDebug()Z

    move-result v0

    if-eqz v0, :cond_1

    if-eqz p0, :cond_1

    .line 313
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    .line 316
    :try_start_0
    invoke-virtual {p0}, Lcom/tkay/core/common/f/d;->y()I

    move-result v1

    if-eqz v1, :cond_0

    const-string v1, "defaultAdSourceType"

    .line 317
    invoke-virtual {p0}, Lcom/tkay/core/common/f/d;->y()I

    move-result v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    :cond_0
    const-string v1, "placementId"

    .line 319
    invoke-virtual {p0}, Lcom/tkay/core/common/f/d;->W()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "adType"

    .line 320
    invoke-virtual {p0}, Lcom/tkay/core/common/f/d;->Z()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v1, "mixedFormatAdType"

    .line 321
    invoke-virtual {p0}, Lcom/tkay/core/common/f/d;->L()I

    move-result v2

    invoke-virtual {v0, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string v1, "action"

    .line 322
    invoke-virtual {v0, v1, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "refresh"

    .line 323
    invoke-virtual {p0}, Lcom/tkay/core/common/f/d;->F()I

    move-result v1

    invoke-virtual {v0, p1, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string p1, "result"

    .line 324
    invoke-virtual {v0, p1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "segmentId"

    .line 325
    invoke-virtual {p0}, Lcom/tkay/core/common/f/d;->I()I

    move-result p2

    invoke-virtual {v0, p1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string p1, "adSourceId"

    .line 326
    invoke-virtual {p0}, Lcom/tkay/core/common/f/d;->x()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v0, p1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "position"

    .line 327
    invoke-virtual {p0}, Lcom/tkay/core/common/f/d;->z()I

    move-result p2

    invoke-virtual {v0, p1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string p1, "networkType"

    .line 328
    invoke-virtual {p0}, Lcom/tkay/core/common/f/d;->H()I

    move-result p2

    invoke-virtual {v0, p1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string p1, "networkName"

    .line 329
    invoke-virtual {p0}, Lcom/tkay/core/common/f/d;->T()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v0, p1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "networkVersion"

    .line 1451
    iget-object p2, p0, Lcom/tkay/core/common/f/d;->u:Ljava/lang/String;

    .line 330
    invoke-virtual {v0, p1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "networkUnit"

    .line 331
    invoke-virtual {p0}, Lcom/tkay/core/common/f/d;->G()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v0, p1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "isHB"

    .line 332
    invoke-virtual {p0}, Lcom/tkay/core/common/f/d;->v()I

    move-result p2

    invoke-virtual {v0, p1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string p1, "msg"

    .line 333
    invoke-virtual {v0, p1, p3}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "hourly_frequency"

    .line 334
    invoke-virtual {p0}, Lcom/tkay/core/common/f/d;->B()I

    move-result p2

    invoke-virtual {v0, p1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string p1, "daily_frequency"

    .line 335
    invoke-virtual {p0}, Lcom/tkay/core/common/f/d;->C()I

    move-result p2

    invoke-virtual {v0, p1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string p1, "network_list"

    .line 336
    invoke-virtual {p0}, Lcom/tkay/core/common/f/d;->D()Ljava/lang/String;

    move-result-object p2

    invoke-virtual {v0, p1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "request_network_num"

    .line 337
    invoke-virtual {p0}, Lcom/tkay/core/common/f/d;->E()I

    move-result p2

    invoke-virtual {v0, p1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string p1, "handle_class"

    .line 338
    invoke-virtual {p0}, Lcom/tkay/core/common/f/d;->i()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p1, p0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    .line 351
    :catchall_0
    invoke-virtual {v0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p0

    const-string p1, "network"

    invoke-static {p1, p0}, Lcom/tkay/core/common/l/n;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_1
    return-void
.end method

.method private static a(Ljava/lang/String;Ljava/util/List;)V
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/aj;",
            ">;)V"
        }
    .end annotation

    if-eqz p1, :cond_2

    .line 399
    :try_start_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    .line 400
    invoke-interface {p1}, Ljava/util/List;->size()I

    move-result v1

    const/4 v2, 0x0

    :goto_0
    if-ge v2, v1, :cond_1

    .line 402
    invoke-interface {p1, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/tkay/core/common/f/aj;

    const-string v4, "\n"

    .line 404
    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 405
    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v4, " --> adSourceId: "

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Lcom/tkay/core/common/f/aj;->t()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, ", "

    .line 406
    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Lcom/tkay/core/common/f/aj;->d()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, ", real: "

    .line 407
    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Lcom/tkay/core/common/f/aj;->x()D

    move-result-wide v4

    invoke-virtual {v0, v4, v5}, Ljava/lang/StringBuilder;->append(D)Ljava/lang/StringBuilder;

    const-string v4, ", sort: "

    .line 408
    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {v3}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/aj;)D

    move-result-wide v4

    invoke-virtual {v0, v4, v5}, Ljava/lang/StringBuilder;->append(D)Ljava/lang/StringBuilder;

    .line 410
    invoke-virtual {v3}, Lcom/tkay/core/common/f/aj;->z()Ljava/lang/String;

    move-result-object v3

    .line 411
    invoke-static {v3}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v4

    if-nez v4, :cond_0

    const-string v4, ", errorMsg: "

    .line 412
    invoke-virtual {v0, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    :cond_0
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 416
    :cond_1
    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p0, p1}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_1

    :catchall_0
    move-exception p0

    .line 419
    invoke-virtual {p0}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_2
    :goto_1
    return-void
.end method

.method public static a(Ljava/util/List;Lcom/tkay/core/common/f/aj;Z)V
    .locals 11
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/aj;",
            ">;",
            "Lcom/tkay/core/common/f/aj;",
            "Z)V"
        }
    .end annotation

    if-nez p0, :cond_0

    return-void

    .line 206
    :cond_0
    invoke-interface {p0}, Ljava/util/List;->size()I

    move-result v0

    const/4 v1, -0x1

    if-eqz p2, :cond_2

    .line 209
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->a()I

    move-result v2

    if-eq v2, v1, :cond_1

    if-nez v0, :cond_3

    .line 210
    :cond_1
    invoke-interface {p0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    return-void

    :cond_2
    if-nez v0, :cond_3

    .line 215
    invoke-interface {p0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    return-void

    :cond_3
    add-int/lit8 v2, v0, -0x1

    const/4 v3, 0x0

    move v4, v3

    :goto_0
    if-ge v4, v0, :cond_7

    .line 279
    invoke-interface {p0, v4}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v5

    check-cast v5, Lcom/tkay/core/common/f/aj;

    const/4 v6, 0x1

    if-eqz p2, :cond_4

    .line 1291
    invoke-virtual {v5}, Lcom/tkay/core/common/f/aj;->a()I

    move-result v7

    if-ne v7, v1, :cond_4

    .line 1292
    invoke-interface {p0, v4, p1}, Ljava/util/List;->add(ILjava/lang/Object;)V

    goto :goto_1

    .line 1297
    :cond_4
    invoke-static {p1}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/aj;)D

    move-result-wide v7

    invoke-static {v5}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/aj;)D

    move-result-wide v9

    cmpl-double v5, v7, v9

    if-ltz v5, :cond_5

    .line 1298
    invoke-interface {p0, v4, p1}, Ljava/util/List;->add(ILjava/lang/Object;)V

    goto :goto_1

    :cond_5
    if-ne v4, v2, :cond_6

    .line 1302
    invoke-interface {p0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    goto :goto_1

    :cond_6
    move v6, v3

    :goto_1
    if-nez v6, :cond_7

    add-int/lit8 v4, v4, 0x1

    goto :goto_0

    :cond_7
    return-void
.end method

.method public static a(Ljava/util/Map;Lcom/tkay/core/common/f/d;)V
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;",
            "Lcom/tkay/core/common/f/d;",
            ")V"
        }
    .end annotation

    if-eqz p1, :cond_0

    .line 453
    invoke-virtual {p1}, Lcom/tkay/core/common/f/d;->H()I

    move-result v0

    const v1, 0x186a0

    if-ge v0, v1, :cond_0

    const-string v0, "tkay_tracking_info"

    .line 454
    invoke-interface {p0, v0, p1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_0
    return-void
.end method

.method public static a(Ljava/lang/String;)Z
    .locals 5

    .line 55
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x0

    const-string v2, "Invalid Channel("

    const-string v3, "tkay"

    if-nez v0, :cond_1

    invoke-virtual {p0}, Ljava/lang/String;->length()I

    move-result v0

    const/16 v4, 0x80

    if-gt v0, v4, :cond_1

    const-string v0, "^([.A-Za-z0-9_-]){1,128}$"

    .line 56
    invoke-static {v0, p0}, Ljava/util/regex/Pattern;->matches(Ljava/lang/String;Ljava/lang/CharSequence;)Z

    move-result v4

    if-eqz v4, :cond_0

    const/4 p0, 0x1

    return p0

    .line 59
    :cond_0
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v4, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, "): contains some characters that are not in the "

    invoke-virtual {v4, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v3, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return v1

    .line 64
    :cond_1
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, "):Channel\'length over 128"

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v3, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return v1
.end method

.method private static a(Ljava/util/List;Lcom/tkay/core/common/f/aj;Lcom/tkay/core/common/f/aj;IIZ)Z
    .locals 5
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/tkay/core/common/f/aj;",
            ">;",
            "Lcom/tkay/core/common/f/aj;",
            "Lcom/tkay/core/common/f/aj;",
            "IIZ)Z"
        }
    .end annotation

    const/4 v0, 0x1

    if-eqz p5, :cond_0

    .line 291
    invoke-virtual {p1}, Lcom/tkay/core/common/f/aj;->a()I

    move-result p5

    const/4 v1, -0x1

    if-ne p5, v1, :cond_0

    .line 292
    invoke-interface {p0, p3, p2}, Ljava/util/List;->add(ILjava/lang/Object;)V

    return v0

    .line 297
    :cond_0
    invoke-static {p2}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/aj;)D

    move-result-wide v1

    invoke-static {p1}, Lcom/tkay/core/common/l/g;->a(Lcom/tkay/core/common/f/aj;)D

    move-result-wide v3

    cmpl-double p1, v1, v3

    if-ltz p1, :cond_1

    .line 298
    invoke-interface {p0, p3, p2}, Ljava/util/List;->add(ILjava/lang/Object;)V

    return v0

    :cond_1
    if-ne p3, p4, :cond_2

    .line 302
    invoke-interface {p0, p2}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    return v0

    :cond_2
    const/4 p0, 0x0

    return p0
.end method

.method public static b(Ljava/lang/String;Ljava/lang/String;J)Ljava/lang/String;
    .locals 1

    .line 112
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {p0, p1, p2, p3}, Lcom/tkay/core/common/l/g;->a(Ljava/lang/String;Ljava/lang/String;J)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, "_refresh"

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static b()Z
    .locals 4

    const-string v0, "age"

    const/4 v1, 0x0

    .line 439
    :try_start_0
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v2

    invoke-virtual {v2}, Lcom/tkay/core/common/b/m;->l()Ljava/util/Map;

    move-result-object v2

    if-eqz v2, :cond_0

    .line 440
    invoke-interface {v2, v0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v3

    if-eqz v3, :cond_0

    .line 441
    invoke-interface {v2, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    invoke-virtual {v0}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Ljava/lang/Integer;->parseInt(Ljava/lang/String;)I

    move-result v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    const/16 v2, 0xd

    if-gt v0, v2, :cond_0

    const/4 v0, 0x1

    move v1, v0

    :catchall_0
    :cond_0
    return v1
.end method

.method public static b(Landroid/content/Context;)Z
    .locals 1

    .line 465
    invoke-static {}, Lcom/tkay/core/common/l/q;->a()Lcom/tkay/core/common/l/q;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/tkay/core/common/l/q;->a(Landroid/content/Context;)Z

    move-result p0

    return p0
.end method

.method public static b(Ljava/lang/String;)Z
    .locals 5

    .line 70
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x0

    const-string v2, "Invalid SubChannel("

    const-string v3, "tkay"

    if-nez v0, :cond_1

    invoke-virtual {p0}, Ljava/lang/String;->length()I

    move-result v0

    const/16 v4, 0x80

    if-gt v0, v4, :cond_1

    const-string v0, "^([.A-Za-z0-9_-]){1,128}$"

    .line 71
    invoke-static {v0, p0}, Ljava/util/regex/Pattern;->matches(Ljava/lang/String;Ljava/lang/CharSequence;)Z

    move-result v4

    if-eqz v4, :cond_0

    const/4 p0, 0x1

    return p0

    .line 74
    :cond_0
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v4, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, "):SubChannel contains some characters that are not in the "

    invoke-virtual {v4, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v3, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return v1

    .line 79
    :cond_1
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, "):SubChannel\'length over 128"

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v3, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return v1
.end method

.method public static c()Z
    .locals 1

    .line 484
    invoke-static {}, Lcom/tkay/core/common/l/q;->a()Lcom/tkay/core/common/l/q;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/l/q;->b()Z

    move-result v0

    return v0
.end method

.method public static c(Landroid/content/Context;)Z
    .locals 1

    .line 475
    invoke-static {}, Lcom/tkay/core/common/l/q;->a()Lcom/tkay/core/common/l/q;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/tkay/core/common/l/q;->b(Landroid/content/Context;)Z

    move-result p0

    return p0
.end method

.method public static c(Ljava/lang/String;)Z
    .locals 5

    .line 86
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    const/4 v1, 0x0

    const-string v2, "Invalid Scenario("

    const-string v3, "tkay"

    if-nez v0, :cond_1

    invoke-virtual {p0}, Ljava/lang/String;->length()I

    move-result v0

    const/16 v4, 0xe

    if-ne v0, v4, :cond_1

    const-string v0, "^[A-Za-z0-9]+$"

    .line 87
    invoke-static {v0, p0}, Ljava/util/regex/Pattern;->matches(Ljava/lang/String;Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 p0, 0x1

    return p0

    .line 91
    :cond_0
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, "):Scenario contains some characters that are not in the [A-Za-z0-9]"

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v3, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return v1

    .line 96
    :cond_1
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0, v2}, Ljava/lang/StringBuilder;-><init>(Ljava/lang/String;)V

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string p0, "):Scenario\'length isn\'t 14"

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {v3, p0}, Landroid/util/Log;->e(Ljava/lang/String;Ljava/lang/String;)I

    return v1
.end method

.method private static d(Landroid/content/Context;)Ljava/lang/String;
    .locals 2

    .line 358
    invoke-static {}, Lcom/tkay/core/common/b/m;->a()Lcom/tkay/core/common/b/m;

    move-result-object v0

    invoke-virtual {v0}, Lcom/tkay/core/common/b/m;->w()Ljava/lang/String;

    move-result-object v0

    .line 359
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    .line 360
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {p0}, Lcom/tkay/core/common/l/d;->d(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Lcom/tkay/core/common/l/d;->f()Ljava/lang/String;

    move-result-object p0

    invoke-virtual {v0, p0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    .line 362
    :cond_0
    new-instance p0, Ljava/lang/StringBuilder;

    invoke-direct {p0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-static {}, Ljava/util/UUID;->randomUUID()Ljava/util/UUID;

    move-result-object v0

    invoke-virtual {v0}, Ljava/util/UUID;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p0, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-static {p0}, Lcom/tkay/core/common/l/f;->a(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p0

    return-object p0
.end method

.method public static d(Ljava/lang/String;)Ljava/lang/String;
    .locals 5

    .line 116
    invoke-virtual {p0}, Ljava/lang/String;->hashCode()I

    move-result v0

    const/4 v1, 0x4

    const/4 v2, 0x3

    const/4 v3, 0x2

    const/4 v4, 0x1

    packed-switch v0, :pswitch_data_0

    goto :goto_0

    :pswitch_0
    const-string v0, "4"

    invoke-virtual {p0, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_0

    move p0, v1

    goto :goto_1

    :pswitch_1
    const-string v0, "3"

    invoke-virtual {p0, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_0

    move p0, v2

    goto :goto_1

    :pswitch_2
    const-string v0, "2"

    invoke-virtual {p0, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_0

    move p0, v3

    goto :goto_1

    :pswitch_3
    const-string v0, "1"

    invoke-virtual {p0, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_0

    move p0, v4

    goto :goto_1

    :pswitch_4
    const-string v0, "0"

    invoke-virtual {p0, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p0

    if-eqz p0, :cond_0

    const/4 p0, 0x0

    goto :goto_1

    :cond_0
    :goto_0
    const/4 p0, -0x1

    :goto_1
    if-eqz p0, :cond_5

    if-eq p0, v4, :cond_4

    if-eq p0, v3, :cond_3

    if-eq p0, v2, :cond_2

    if-eq p0, v1, :cond_1

    const-string p0, ""

    return-object p0

    :cond_1
    const-string p0, "Splash"

    return-object p0

    :cond_2
    const-string p0, "Interstitial"

    return-object p0

    :cond_3
    const-string p0, "Banner"

    return-object p0

    :cond_4
    const-string p0, "RewardedVideo"

    return-object p0

    :cond_5
    const-string p0, "Native"

    return-object p0

    nop

    :pswitch_data_0
    .packed-switch 0x30
        :pswitch_4
        :pswitch_3
        :pswitch_2
        :pswitch_1
        :pswitch_0
    .end packed-switch
.end method
