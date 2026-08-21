.class public Lcom/bianfeng/h5library/utils/H5libAppContext;
.super Ljava/lang/Object;
.source "H5libAppContext.java"


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 8
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static getPkgName()Ljava/lang/String;
    .locals 1

    .line 14
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getPkgName()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static getSdkVersion()Ljava/lang/String;
    .locals 4

    const-string v0, "com.bianfeng.splitscreenlib.utils.YmnH5Version"

    .line 20
    :try_start_0
    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v1

    const/4 v2, 0x0

    new-array v3, v2, [Ljava/lang/Class;

    .line 21
    invoke-virtual {v1, v3}, Ljava/lang/Class;->getConstructor([Ljava/lang/Class;)Ljava/lang/reflect/Constructor;

    move-result-object v3

    new-array v2, v2, [Ljava/lang/Object;

    .line 22
    invoke-virtual {v3, v2}, Ljava/lang/reflect/Constructor;->newInstance([Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    const-string v3, "version"

    .line 23
    invoke-virtual {v1, v3}, Ljava/lang/Class;->getDeclaredField(Ljava/lang/String;)Ljava/lang/reflect/Field;

    move-result-object v1

    const/4 v3, 0x1

    .line 24
    invoke-virtual {v1, v3}, Ljava/lang/reflect/Field;->setAccessible(Z)V

    .line 25
    invoke-virtual {v1, v2}, Ljava/lang/reflect/Field;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    .line 27
    :catch_0
    new-instance v1, Ljava/lang/StringBuilder;

    invoke-direct {v1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "not find class="

    invoke-virtual {v1, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v0, ",Field= version"

    invoke-virtual {v1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method

.method public static getVerName()Ljava/lang/String;
    .locals 1

    .line 10
    invoke-static {}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getInstance()Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/ymnsdk/utilslib/appinfo/AppContext;->getVerName()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
