.class public Lcom/ss/android/downloadlib/utils/rz;
.super Ljava/lang/Object;


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/ss/android/downloadlib/utils/rz$rg;
    }
.end annotation


# static fields
.field private static rg:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Lcom/ss/android/downloadlib/utils/rz$rg;",
            ">;"
        }
    .end annotation
.end field


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 17
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    invoke-static {v0}, Ljava/util/Collections;->synchronizedMap(Ljava/util/Map;)Ljava/util/Map;

    move-result-object v0

    sput-object v0, Lcom/ss/android/downloadlib/utils/rz;->rg:Ljava/util/Map;

    return-void
.end method

.method public static df(Ljava/lang/String;)Z
    .locals 2

    .line 75
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->pp()Lcom/ss/android/download/api/config/rz;

    move-result-object v0

    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object v1

    invoke-interface {v0, v1, p0}, Lcom/ss/android/download/api/config/rz;->rg(Landroid/content/Context;Ljava/lang/String;)Z

    move-result p0

    return p0
.end method

.method private static q(Ljava/lang/String;)Lcom/ss/android/downloadlib/utils/rz$rg;
    .locals 1

    .line 61
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    const/4 p0, 0x0

    return-object p0

    .line 65
    :cond_0
    sget-object v0, Lcom/ss/android/downloadlib/utils/rz;->rg:Ljava/util/Map;

    invoke-interface {v0, p0}, Ljava/util/Map;->remove(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Lcom/ss/android/downloadlib/utils/rz$rg;

    return-object p0
.end method

.method public static rg(Ljava/lang/String;)V
    .locals 1

    .line 29
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 33
    :cond_0
    invoke-static {p0}, Lcom/ss/android/downloadlib/utils/rz;->q(Ljava/lang/String;)Lcom/ss/android/downloadlib/utils/rz$rg;

    move-result-object p0

    if-nez p0, :cond_1

    return-void

    .line 38
    :cond_1
    invoke-interface {p0}, Lcom/ss/android/downloadlib/utils/rz$rg;->rg()V

    return-void
.end method

.method private static rg(Ljava/lang/String;Lcom/ss/android/downloadlib/utils/rz$rg;)V
    .locals 1

    .line 54
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_1

    if-nez p1, :cond_0

    goto :goto_0

    .line 57
    :cond_0
    sget-object v0, Lcom/ss/android/downloadlib/utils/rz;->rg:Ljava/util/Map;

    invoke-interface {v0, p0, p1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    :cond_1
    :goto_0
    return-void
.end method

.method public static rg(Ljava/lang/String;Ljava/lang/String;)V
    .locals 1

    .line 42
    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 46
    :cond_0
    invoke-static {p0}, Lcom/ss/android/downloadlib/utils/rz;->q(Ljava/lang/String;)Lcom/ss/android/downloadlib/utils/rz$rg;

    move-result-object p0

    if-nez p0, :cond_1

    return-void

    .line 50
    :cond_1
    invoke-interface {p0, p1}, Lcom/ss/android/downloadlib/utils/rz$rg;->rg(Ljava/lang/String;)V

    return-void
.end method

.method public static rg([Ljava/lang/String;Lcom/ss/android/downloadlib/utils/rz$rg;)V
    .locals 2

    if-eqz p0, :cond_1

    .line 20
    array-length v0, p0

    if-gtz v0, :cond_0

    goto :goto_0

    .line 23
    :cond_0
    invoke-static {}, Ljava/lang/System;->currentTimeMillis()J

    move-result-wide v0

    invoke-static {v0, v1}, Ljava/lang/String;->valueOf(J)Ljava/lang/String;

    move-result-object v0

    .line 24
    invoke-static {v0, p1}, Lcom/ss/android/downloadlib/utils/rz;->rg(Ljava/lang/String;Lcom/ss/android/downloadlib/utils/rz$rg;)V

    .line 25
    invoke-static {v0, p0}, Lcom/ss/android/downloadlib/activity/TTDelegateActivity;->rg(Ljava/lang/String;[Ljava/lang/String;)V

    :cond_1
    :goto_0
    return-void
.end method
