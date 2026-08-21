.class public Lcom/bianfeng/datafunsdk/y;
.super Ljava/lang/Object;
.source "SharedPreferencesUtils.java"


# static fields
.field public static a:Ljava/lang/String; = "datafun_delbd"


# direct methods
.method public static constructor <clinit>()V
    .locals 0

    return-void
.end method

.method public static a()I
    .locals 1

    .line 2
    sget-object v0, Lcom/bianfeng/datafunsdk/y;->a:Ljava/lang/String;

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->getInt(Ljava/lang/String;)I

    move-result v0

    return v0
.end method

.method public static a(I)V
    .locals 1

    .line 1
    :try_start_0
    sget-object v0, Lcom/bianfeng/datafunsdk/y;->a:Ljava/lang/String;

    invoke-static {v0, p0}, Lcom/bianfeng/ymnsdk/utilslib/cache/SharedPreferencesUtils;->put(Ljava/lang/String;I)V
    :try_end_0
    .catch Lcom/bianfeng/ymnsdk/utilslib/exception/YmnException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    :goto_0
    return-void
.end method
