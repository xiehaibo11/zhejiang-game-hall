.class public final Lcom/mbridge/msdk/foundation/aidl/b;
.super Ljava/lang/Object;
.source "ReflectUtils.java"


# direct methods
.method public static varargs a(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;
    .locals 6

    const/4 v0, 0x0

    if-eqz p0, :cond_4

    const-string v1, ""

    .line 47
    invoke-virtual {p0, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_0

    goto :goto_1

    :cond_0
    if-eqz p2, :cond_4

    .line 52
    invoke-virtual {p2, v1}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1

    goto :goto_1

    .line 57
    :cond_1
    :try_start_0
    invoke-static {p0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object p0

    const/4 v1, 0x1

    const/4 v2, 0x0

    if-eqz p3, :cond_3

    .line 58
    array-length v3, p3

    if-lez v3, :cond_3

    .line 59
    array-length v3, p3

    .line 60
    new-array v4, v3, [Ljava/lang/Class;

    :goto_0
    if-ge v2, v3, :cond_2

    .line 62
    aget-object v5, p3, v2

    invoke-virtual {v5}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v5

    aput-object v5, v4, v2

    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 64
    :cond_2
    invoke-virtual {p0, p2, v4}, Ljava/lang/Class;->getDeclaredMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object p0

    .line 65
    invoke-virtual {p0, v1}, Ljava/lang/reflect/Method;->setAccessible(Z)V

    .line 66
    invoke-virtual {p0, p1, p3}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    return-object p0

    :cond_3
    new-array p3, v2, [Ljava/lang/Class;

    .line 68
    invoke-virtual {p0, p2, p3}, Ljava/lang/Class;->getDeclaredMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object p0

    .line 69
    invoke-virtual {p0, v1}, Ljava/lang/reflect/Method;->setAccessible(Z)V

    new-array p2, v2, [Ljava/lang/Object;

    .line 70
    invoke-virtual {p0, p1, p2}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object p0

    :catch_0
    move-exception p0

    .line 72
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_4
    :goto_1
    return-object v0
.end method
