.class public final Lcom/loc/ew;
.super Lcom/amap/api/location/AMapLocation;
.source "AMapLocationServer.java"


# instance fields
.field protected d:Ljava/lang/String;

.field e:Z

.field f:Ljava/lang/String;

.field private g:Ljava/lang/String;

.field private h:Ljava/lang/String;

.field private i:I

.field private j:Ljava/lang/String;

.field private k:I

.field private l:Ljava/lang/String;

.field private m:Lorg/json/JSONObject;

.field private n:Ljava/lang/String;

.field private o:Ljava/lang/String;

.field private p:Ljava/lang/String;


# direct methods
.method public constructor <init>(Ljava/lang/String;)V
    .locals 2

    invoke-direct {p0, p1}, Lcom/amap/api/location/AMapLocation;-><init>(Ljava/lang/String;)V

    const-string p1, ""

    iput-object p1, p0, Lcom/loc/ew;->d:Ljava/lang/String;

    const/4 v0, 0x0

    iput-object v0, p0, Lcom/loc/ew;->g:Ljava/lang/String;

    iput-object p1, p0, Lcom/loc/ew;->h:Ljava/lang/String;

    iput-object p1, p0, Lcom/loc/ew;->j:Ljava/lang/String;

    const/4 v1, 0x0

    iput v1, p0, Lcom/loc/ew;->k:I

    const-string v1, "new"

    iput-object v1, p0, Lcom/loc/ew;->l:Ljava/lang/String;

    iput-object v0, p0, Lcom/loc/ew;->m:Lorg/json/JSONObject;

    iput-object p1, p0, Lcom/loc/ew;->n:Ljava/lang/String;

    const/4 v1, 0x1

    iput-boolean v1, p0, Lcom/loc/ew;->e:Z

    sget-object v1, Lcom/amap/api/location/AMapLocationClientOption$GeoLanguage;->DEFAULT:Lcom/amap/api/location/AMapLocationClientOption$GeoLanguage;

    invoke-static {v1}, Ljava/lang/String;->valueOf(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v1

    iput-object v1, p0, Lcom/loc/ew;->f:Ljava/lang/String;

    iput-object p1, p0, Lcom/loc/ew;->o:Ljava/lang/String;

    iput-object v0, p0, Lcom/loc/ew;->p:Ljava/lang/String;

    return-void
.end method

.method private i(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/loc/ew;->n:Ljava/lang/String;

    return-void
.end method

.method private j(Ljava/lang/String;)V
    .locals 6

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    :cond_0
    const-string v0, "\\*"

    invoke-virtual {p1, v0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v0

    array-length v1, v0

    const/4 v2, 0x0

    const/4 v3, 0x0

    :goto_0
    if-ge v3, v1, :cond_2

    aget-object v4, v0, v3

    invoke-static {v4}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_1

    const-string v0, ","

    invoke-virtual {v4, v0}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v0

    aget-object v1, v0, v2

    invoke-static {v1}, Lcom/loc/fz;->c(Ljava/lang/String;)D

    move-result-wide v1

    invoke-virtual {p0, v1, v2}, Lcom/loc/ew;->setLongitude(D)V

    const/4 v1, 0x1

    aget-object v1, v0, v1

    invoke-static {v1}, Lcom/loc/fz;->c(Ljava/lang/String;)D

    move-result-wide v1

    invoke-virtual {p0, v1, v2}, Lcom/loc/ew;->setLatitude(D)V

    const/4 v1, 0x2

    aget-object v0, v0, v1

    invoke-static {v0}, Lcom/loc/fz;->e(Ljava/lang/String;)I

    move-result v0

    int-to-float v0, v0

    invoke-virtual {p0, v0}, Lcom/loc/ew;->setAccuracy(F)V

    goto :goto_1

    :cond_1
    add-int/lit8 v3, v3, 0x1

    goto :goto_0

    :cond_2
    :goto_1
    iput-object p1, p0, Lcom/loc/ew;->o:Ljava/lang/String;

    return-void
.end method


# virtual methods
.method public final a()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/loc/ew;->g:Ljava/lang/String;

    return-object v0
.end method

.method public final a(I)V
    .locals 0

    iput p1, p0, Lcom/loc/ew;->k:I

    return-void
.end method

.method public final a(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/loc/ew;->g:Ljava/lang/String;

    return-void
.end method

.method public final a(Lorg/json/JSONObject;)V
    .locals 0

    iput-object p1, p0, Lcom/loc/ew;->m:Lorg/json/JSONObject;

    return-void
.end method

.method public final a(Z)V
    .locals 0

    iput-boolean p1, p0, Lcom/loc/ew;->e:Z

    return-void
.end method

.method public final b()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/loc/ew;->h:Ljava/lang/String;

    return-object v0
.end method

.method public final b(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/loc/ew;->h:Ljava/lang/String;

    return-void
.end method

.method public final b(Lorg/json/JSONObject;)V
    .locals 6

    const-string v0, "flr"

    const-string v1, "floor"

    const-string v2, "pid"

    const-string v3, "poiid"

    :try_start_0
    invoke-static {p0, p1}, Lcom/loc/fr;->a(Lcom/amap/api/location/AMapLocation;Lorg/json/JSONObject;)V

    const-string v4, "type"

    iget-object v5, p0, Lcom/loc/ew;->l:Ljava/lang/String;

    invoke-virtual {p1, v4, v5}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {p0, v4}, Lcom/loc/ew;->e(Ljava/lang/String;)V

    const-string v4, "retype"

    iget-object v5, p0, Lcom/loc/ew;->j:Ljava/lang/String;

    invoke-virtual {p1, v4, v5}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {p0, v4}, Lcom/loc/ew;->d(Ljava/lang/String;)V

    const-string v4, "cens"

    iget-object v5, p0, Lcom/loc/ew;->o:Ljava/lang/String;

    invoke-virtual {p1, v4, v5}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    invoke-direct {p0, v4}, Lcom/loc/ew;->j(Ljava/lang/String;)V

    const-string v4, "desc"

    iget-object v5, p0, Lcom/loc/ew;->d:Ljava/lang/String;

    invoke-virtual {p1, v4, v5}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {p0, v4}, Lcom/loc/ew;->g(Ljava/lang/String;)V

    const-string v4, "coord"

    iget v5, p0, Lcom/loc/ew;->i:I

    invoke-static {v5}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v5

    invoke-virtual {p1, v4, v5}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {p0, v4}, Lcom/loc/ew;->c(Ljava/lang/String;)V

    const-string v4, "mcell"

    iget-object v5, p0, Lcom/loc/ew;->n:Ljava/lang/String;

    invoke-virtual {p1, v4, v5}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    invoke-direct {p0, v4}, Lcom/loc/ew;->i(Ljava/lang/String;)V

    const-string v4, "isReversegeo"

    iget-boolean v5, p0, Lcom/loc/ew;->e:Z

    invoke-virtual {p1, v4, v5}, Lorg/json/JSONObject;->optBoolean(Ljava/lang/String;Z)Z

    move-result v4

    invoke-virtual {p0, v4}, Lcom/loc/ew;->a(Z)V

    const-string v4, "geoLanguage"

    iget-object v5, p0, Lcom/loc/ew;->f:Ljava/lang/String;

    invoke-virtual {p1, v4, v5}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v4

    invoke-virtual {p0, v4}, Lcom/loc/ew;->f(Ljava/lang/String;)V

    invoke-static {p1, v3}, Lcom/loc/fz;->a(Lorg/json/JSONObject;Ljava/lang/String;)Z

    move-result v4

    if-eqz v4, :cond_0

    invoke-virtual {p1, v3}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {p0, v3}, Lcom/loc/ew;->setBuildingId(Ljava/lang/String;)V

    :cond_0
    invoke-static {p1, v2}, Lcom/loc/fz;->a(Lorg/json/JSONObject;Ljava/lang/String;)Z

    move-result v3

    if-eqz v3, :cond_1

    invoke-virtual {p1, v2}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v2

    invoke-virtual {p0, v2}, Lcom/loc/ew;->setBuildingId(Ljava/lang/String;)V

    :cond_1
    invoke-static {p1, v1}, Lcom/loc/fz;->a(Lorg/json/JSONObject;Ljava/lang/String;)Z

    move-result v2

    if-eqz v2, :cond_2

    invoke-virtual {p1, v1}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p0, v1}, Lcom/loc/ew;->setFloor(Ljava/lang/String;)V

    :cond_2
    invoke-static {p1, v0}, Lcom/loc/fz;->a(Lorg/json/JSONObject;Ljava/lang/String;)Z

    move-result v1

    if-eqz v1, :cond_3

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->optString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {p0, p1}, Lcom/loc/ew;->setFloor(Ljava/lang/String;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_3
    return-void

    :catchall_0
    move-exception p1

    const-string v0, "AmapLoc"

    invoke-static {p1, v0, v0}, Lcom/loc/fr;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    return-void
.end method

.method public final c()I
    .locals 1

    iget v0, p0, Lcom/loc/ew;->i:I

    return v0
.end method

.method public final c(Ljava/lang/String;)V
    .locals 1

    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    const-string v0, "0"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 p1, 0x0

    goto :goto_0

    :cond_0
    const-string v0, "1"

    invoke-virtual {p1, v0}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_1

    const/4 p1, 0x1

    goto :goto_0

    :cond_1
    const/4 p1, -0x1

    :goto_0
    iput p1, p0, Lcom/loc/ew;->i:I

    iget p1, p0, Lcom/loc/ew;->i:I

    if-nez p1, :cond_2

    const-string p1, "WGS84"

    :goto_1
    invoke-super {p0, p1}, Lcom/amap/api/location/AMapLocation;->setCoordType(Ljava/lang/String;)V

    return-void

    :cond_2
    const-string p1, "GCJ02"

    goto :goto_1
.end method

.method public final d()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/loc/ew;->j:Ljava/lang/String;

    return-object v0
.end method

.method public final d(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/loc/ew;->j:Ljava/lang/String;

    return-void
.end method

.method public final e()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/loc/ew;->l:Ljava/lang/String;

    return-object v0
.end method

.method public final e(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/loc/ew;->l:Ljava/lang/String;

    return-void
.end method

.method public final f()Lorg/json/JSONObject;
    .locals 1

    iget-object v0, p0, Lcom/loc/ew;->m:Lorg/json/JSONObject;

    return-object v0
.end method

.method public final f(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/loc/ew;->f:Ljava/lang/String;

    return-void
.end method

.method public final g()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/loc/ew;->n:Ljava/lang/String;

    return-object v0
.end method

.method public final g(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/loc/ew;->d:Ljava/lang/String;

    return-void
.end method

.method public final h()Lcom/loc/ew;
    .locals 5

    invoke-virtual {p0}, Lcom/loc/ew;->g()Ljava/lang/String;

    move-result-object v0

    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    const/4 v2, 0x0

    if-eqz v1, :cond_0

    return-object v2

    :cond_0
    const-string v1, ","

    invoke-virtual {v0, v1}, Ljava/lang/String;->split(Ljava/lang/String;)[Ljava/lang/String;

    move-result-object v0

    array-length v1, v0

    const/4 v3, 0x3

    if-eq v1, v3, :cond_1

    return-object v2

    :cond_1
    new-instance v1, Lcom/loc/ew;

    const-string v3, ""

    invoke-direct {v1, v3}, Lcom/loc/ew;-><init>(Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/loc/ew;->getProvider()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Lcom/loc/ew;->setProvider(Ljava/lang/String;)V

    const/4 v3, 0x0

    aget-object v3, v0, v3

    invoke-static {v3}, Lcom/loc/fz;->c(Ljava/lang/String;)D

    move-result-wide v3

    invoke-virtual {v1, v3, v4}, Lcom/loc/ew;->setLongitude(D)V

    const/4 v3, 0x1

    aget-object v3, v0, v3

    invoke-static {v3}, Lcom/loc/fz;->c(Ljava/lang/String;)D

    move-result-wide v3

    invoke-virtual {v1, v3, v4}, Lcom/loc/ew;->setLatitude(D)V

    const/4 v3, 0x2

    aget-object v0, v0, v3

    invoke-static {v0}, Lcom/loc/fz;->d(Ljava/lang/String;)F

    move-result v0

    invoke-virtual {v1, v0}, Lcom/loc/ew;->setAccuracy(F)V

    invoke-virtual {p0}, Lcom/loc/ew;->getCityCode()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Lcom/loc/ew;->setCityCode(Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/loc/ew;->getAdCode()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Lcom/loc/ew;->setAdCode(Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/loc/ew;->getCountry()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Lcom/loc/ew;->setCountry(Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/loc/ew;->getProvince()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Lcom/loc/ew;->setProvince(Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/loc/ew;->getCity()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Lcom/loc/ew;->setCity(Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/loc/ew;->getTime()J

    move-result-wide v3

    invoke-virtual {v1, v3, v4}, Lcom/loc/ew;->setTime(J)V

    invoke-virtual {p0}, Lcom/loc/ew;->e()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Lcom/loc/ew;->e(Ljava/lang/String;)V

    invoke-virtual {p0}, Lcom/loc/ew;->c()I

    move-result v0

    invoke-static {v0}, Ljava/lang/String;->valueOf(I)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {v1, v0}, Lcom/loc/ew;->c(Ljava/lang/String;)V

    invoke-static {v1}, Lcom/loc/fz;->a(Lcom/loc/ew;)Z

    move-result v0

    if-nez v0, :cond_2

    return-object v2

    :cond_2
    return-object v1
.end method

.method public final h(Ljava/lang/String;)V
    .locals 0

    iput-object p1, p0, Lcom/loc/ew;->p:Ljava/lang/String;

    return-void
.end method

.method public final i()Z
    .locals 1

    iget-boolean v0, p0, Lcom/loc/ew;->e:Z

    return v0
.end method

.method public final j()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/loc/ew;->f:Ljava/lang/String;

    return-object v0
.end method

.method public final k()Ljava/lang/String;
    .locals 1

    iget-object v0, p0, Lcom/loc/ew;->p:Ljava/lang/String;

    return-object v0
.end method

.method public final l()I
    .locals 1

    iget v0, p0, Lcom/loc/ew;->k:I

    return v0
.end method

.method public final toJson(I)Lorg/json/JSONObject;
    .locals 3

    const-string v0, "offpct"

    :try_start_0
    invoke-super {p0, p1}, Lcom/amap/api/location/AMapLocation;->toJson(I)Lorg/json/JSONObject;

    move-result-object v1

    const/4 v2, 0x1

    if-eq p1, v2, :cond_0

    const/4 v0, 0x2

    if-eq p1, v0, :cond_1

    const/4 v0, 0x3

    if-eq p1, v0, :cond_1

    goto :goto_0

    :cond_0
    const-string p1, "retype"

    iget-object v2, p0, Lcom/loc/ew;->j:Ljava/lang/String;

    invoke-virtual {v1, p1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "cens"

    iget-object v2, p0, Lcom/loc/ew;->o:Ljava/lang/String;

    invoke-virtual {v1, p1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "coord"

    iget v2, p0, Lcom/loc/ew;->i:I

    invoke-virtual {v1, p1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    const-string p1, "mcell"

    iget-object v2, p0, Lcom/loc/ew;->n:Ljava/lang/String;

    invoke-virtual {v1, p1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "desc"

    iget-object v2, p0, Lcom/loc/ew;->d:Ljava/lang/String;

    invoke-virtual {v1, p1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "address"

    invoke-virtual {p0}, Lcom/loc/ew;->getAddress()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, p1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    iget-object p1, p0, Lcom/loc/ew;->m:Lorg/json/JSONObject;

    if-eqz p1, :cond_1

    invoke-static {v1, v0}, Lcom/loc/fz;->a(Lorg/json/JSONObject;Ljava/lang/String;)Z

    move-result p1

    if-eqz p1, :cond_1

    iget-object p1, p0, Lcom/loc/ew;->m:Lorg/json/JSONObject;

    invoke-virtual {p1, v0}, Lorg/json/JSONObject;->getString(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    invoke-virtual {v1, v0, p1}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    :cond_1
    const-string p1, "type"

    iget-object v0, p0, Lcom/loc/ew;->l:Ljava/lang/String;

    invoke-virtual {v1, p1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string p1, "isReversegeo"

    iget-boolean v0, p0, Lcom/loc/ew;->e:Z

    invoke-virtual {v1, p1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Z)Lorg/json/JSONObject;

    const-string p1, "geoLanguage"

    iget-object v0, p0, Lcom/loc/ew;->f:Ljava/lang/String;

    invoke-virtual {v1, p1, v0}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    const/4 v1, 0x0

    const-string v0, "AmapLoc"

    const-string v2, "toStr"

    invoke-static {p1, v0, v2}, Lcom/loc/fr;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    return-object v1
.end method

.method public final toStr()Ljava/lang/String;
    .locals 1

    const/4 v0, 0x1

    invoke-virtual {p0, v0}, Lcom/loc/ew;->toStr(I)Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public final toStr(I)Ljava/lang/String;
    .locals 3

    const/4 v0, 0x0

    :try_start_0
    invoke-virtual {p0, p1}, Lcom/loc/ew;->toJson(I)Lorg/json/JSONObject;

    move-result-object p1

    const-string v1, "nb"

    iget-object v2, p0, Lcom/loc/ew;->p:Ljava/lang/String;

    invoke-virtual {p1, v1, v2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception p1

    const-string v1, "AMapLocation"

    const-string v2, "toStr part2"

    invoke-static {p1, v1, v2}, Lcom/loc/fr;->a(Ljava/lang/Throwable;Ljava/lang/String;Ljava/lang/String;)V

    move-object p1, v0

    :goto_0
    if-nez p1, :cond_0

    return-object v0

    :cond_0
    invoke-virtual {p1}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method
