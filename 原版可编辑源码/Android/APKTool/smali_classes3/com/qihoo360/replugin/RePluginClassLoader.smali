.class public Lcom/qihoo360/replugin/RePluginClassLoader;
.super Ldalvik/system/PathClassLoader;
.source "RePluginClassLoader.java"


# static fields
.field private static final TAG:Ljava/lang/String; = "RePluginClassLoader"


# instance fields
.field private findLibraryMethod:Ljava/lang/reflect/Method;

.field private findResourceMethod:Ljava/lang/reflect/Method;

.field private findResourcesMethod:Ljava/lang/reflect/Method;

.field private getPackageMethod:Ljava/lang/reflect/Method;

.field private final mOrig:Ljava/lang/ClassLoader;


# direct methods
.method public constructor <init>(Ljava/lang/ClassLoader;Ljava/lang/ClassLoader;)V
    .locals 1

    const-string v0, ""

    .line 71
    invoke-direct {p0, v0, v0, p1}, Ldalvik/system/PathClassLoader;-><init>(Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;)V

    .line 72
    iput-object p2, p0, Lcom/qihoo360/replugin/RePluginClassLoader;->mOrig:Ljava/lang/ClassLoader;

    .line 77
    invoke-direct {p0, p2}, Lcom/qihoo360/replugin/RePluginClassLoader;->copyFromOriginal(Ljava/lang/ClassLoader;)V

    .line 79
    invoke-direct {p0, p2}, Lcom/qihoo360/replugin/RePluginClassLoader;->initMethods(Ljava/lang/ClassLoader;)V

    return-void
.end method

.method private copyFieldValue(Ljava/lang/String;Ljava/lang/ClassLoader;)V
    .locals 5

    const-string v0, "ws001"

    .line 117
    :try_start_0
    invoke-virtual {p2}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v1

    invoke-static {v1, p1}, Lcom/qihoo360/replugin/utils/ReflectUtils;->getField(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/reflect/Field;

    move-result-object v1

    if-nez v1, :cond_0

    .line 120
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "rpcl.cfv: null! f="

    invoke-virtual {p2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {v0, p2}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;)I

    return-void

    .line 126
    :cond_0
    invoke-static {v1}, Lcom/qihoo360/replugin/utils/ReflectUtils;->removeFieldFinalModifier(Ljava/lang/reflect/Field;)V

    .line 129
    invoke-static {v1, p2}, Lcom/qihoo360/replugin/utils/ReflectUtils;->readField(Ljava/lang/reflect/Field;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p2

    .line 130
    invoke-static {v1, p0, p2}, Lcom/qihoo360/replugin/utils/ReflectUtils;->writeField(Ljava/lang/reflect/Field;Ljava/lang/Object;Ljava/lang/Object;)V

    .line 132
    sget-boolean v2, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v2, :cond_1

    .line 133
    invoke-static {v1, p0}, Lcom/qihoo360/replugin/utils/ReflectUtils;->readField(Ljava/lang/reflect/Field;Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    const-string v2, "RePluginClassLoader"

    .line 134
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    const-string v4, "copyFieldValue: Copied. f="

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v4, "; actually="

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    const-string v1, "; orig="

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, p2}, Ljava/lang/StringBuilder;->append(Ljava/lang/Object;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p2

    invoke-static {v2, p2}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_0
    .catch Ljava/lang/IllegalAccessException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    .line 138
    :catch_0
    new-instance p2, Ljava/lang/StringBuilder;

    invoke-direct {p2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "rpcl.cfv: fail! f="

    invoke-virtual {p2, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {v0, p1}, Lcom/qihoo360/replugin/helper/LogRelease;->e(Ljava/lang/String;Ljava/lang/String;)I

    :cond_1
    :goto_0
    return-void
.end method

.method private copyFromOriginal(Ljava/lang/ClassLoader;)V
    .locals 2

    .line 95
    sget-boolean v0, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v0, :cond_0

    invoke-static {}, Lcom/qihoo360/replugin/base/IPC;->isPersistentProcess()Z

    move-result v0

    if-eqz v0, :cond_0

    .line 96
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "copyFromOriginal: Fields="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v1

    invoke-static {v1}, Lcom/qihoo360/replugin/utils/ReflectUtils;->getAllFieldsList(Ljava/lang/Class;)Ljava/util/List;

    move-result-object v1

    invoke-static {v1}, Lcom/qihoo360/loader/utils/StringUtils;->toStringWithLines(Ljava/util/List;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "RePluginClassLoader"

    invoke-static {v1, v0}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I

    .line 99
    :cond_0
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0xa

    if-gt v0, v1, :cond_1

    const-string v0, "libPath"

    .line 102
    invoke-direct {p0, v0, p1}, Lcom/qihoo360/replugin/RePluginClassLoader;->copyFieldValue(Ljava/lang/String;Ljava/lang/ClassLoader;)V

    const-string v0, "libraryPathElements"

    .line 103
    invoke-direct {p0, v0, p1}, Lcom/qihoo360/replugin/RePluginClassLoader;->copyFieldValue(Ljava/lang/String;Ljava/lang/ClassLoader;)V

    const-string v0, "mDexs"

    .line 104
    invoke-direct {p0, v0, p1}, Lcom/qihoo360/replugin/RePluginClassLoader;->copyFieldValue(Ljava/lang/String;Ljava/lang/ClassLoader;)V

    const-string v0, "mFiles"

    .line 105
    invoke-direct {p0, v0, p1}, Lcom/qihoo360/replugin/RePluginClassLoader;->copyFieldValue(Ljava/lang/String;Ljava/lang/ClassLoader;)V

    const-string v0, "mPaths"

    .line 106
    invoke-direct {p0, v0, p1}, Lcom/qihoo360/replugin/RePluginClassLoader;->copyFieldValue(Ljava/lang/String;Ljava/lang/ClassLoader;)V

    const-string v0, "mZips"

    .line 107
    invoke-direct {p0, v0, p1}, Lcom/qihoo360/replugin/RePluginClassLoader;->copyFieldValue(Ljava/lang/String;Ljava/lang/ClassLoader;)V

    goto :goto_0

    :cond_1
    const-string v0, "pathList"

    .line 111
    invoke-direct {p0, v0, p1}, Lcom/qihoo360/replugin/RePluginClassLoader;->copyFieldValue(Ljava/lang/String;Ljava/lang/ClassLoader;)V

    :goto_0
    return-void
.end method

.method private initMethods(Ljava/lang/ClassLoader;)V
    .locals 4

    .line 83
    invoke-virtual {p1}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object p1

    const/4 v0, 0x1

    new-array v1, v0, [Ljava/lang/Class;

    .line 84
    const-class v2, Ljava/lang/String;

    const/4 v3, 0x0

    aput-object v2, v1, v3

    const-string v2, "findResource"

    invoke-static {p1, v2, v1}, Lcom/qihoo360/replugin/utils/ReflectUtils;->getMethod(Ljava/lang/Class;Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v1

    iput-object v1, p0, Lcom/qihoo360/replugin/RePluginClassLoader;->findResourceMethod:Ljava/lang/reflect/Method;

    .line 85
    invoke-virtual {v1, v0}, Ljava/lang/reflect/Method;->setAccessible(Z)V

    new-array v1, v0, [Ljava/lang/Class;

    .line 86
    const-class v2, Ljava/lang/String;

    aput-object v2, v1, v3

    const-string v2, "findResources"

    invoke-static {p1, v2, v1}, Lcom/qihoo360/replugin/utils/ReflectUtils;->getMethod(Ljava/lang/Class;Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v1

    iput-object v1, p0, Lcom/qihoo360/replugin/RePluginClassLoader;->findResourcesMethod:Ljava/lang/reflect/Method;

    .line 87
    invoke-virtual {v1, v0}, Ljava/lang/reflect/Method;->setAccessible(Z)V

    new-array v1, v0, [Ljava/lang/Class;

    .line 88
    const-class v2, Ljava/lang/String;

    aput-object v2, v1, v3

    const-string v2, "findLibrary"

    invoke-static {p1, v2, v1}, Lcom/qihoo360/replugin/utils/ReflectUtils;->getMethod(Ljava/lang/Class;Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v1

    iput-object v1, p0, Lcom/qihoo360/replugin/RePluginClassLoader;->findLibraryMethod:Ljava/lang/reflect/Method;

    .line 89
    invoke-virtual {v1, v0}, Ljava/lang/reflect/Method;->setAccessible(Z)V

    new-array v1, v0, [Ljava/lang/Class;

    .line 90
    const-class v2, Ljava/lang/String;

    aput-object v2, v1, v3

    const-string v2, "getPackage"

    invoke-static {p1, v2, v1}, Lcom/qihoo360/replugin/utils/ReflectUtils;->getMethod(Ljava/lang/Class;Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object p1

    iput-object p1, p0, Lcom/qihoo360/replugin/RePluginClassLoader;->getPackageMethod:Ljava/lang/reflect/Method;

    .line 91
    invoke-virtual {p1, v0}, Ljava/lang/reflect/Method;->setAccessible(Z)V

    return-void
.end method


# virtual methods
.method protected findClass(Ljava/lang/String;)Ljava/lang/Class;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/lang/Class<",
            "*>;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/ClassNotFoundException;
        }
    .end annotation

    .line 170
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v1, "NRH lcl.fc: c="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    const-string v1, "ws001"

    invoke-static {v1, v0}, Lcom/qihoo360/replugin/helper/LogRelease;->w(Ljava/lang/String;Ljava/lang/String;)I

    .line 172
    invoke-super {p0, p1}, Ldalvik/system/PathClassLoader;->findClass(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object p1

    return-object p1
.end method

.method public findLibrary(Ljava/lang/String;)Ljava/lang/String;
    .locals 4

    .line 207
    :try_start_0
    iget-object v0, p0, Lcom/qihoo360/replugin/RePluginClassLoader;->findLibraryMethod:Ljava/lang/reflect/Method;

    iget-object v1, p0, Lcom/qihoo360/replugin/RePluginClassLoader;->mOrig:Ljava/lang/ClassLoader;

    const/4 v2, 0x1

    new-array v2, v2, [Ljava/lang/Object;

    const/4 v3, 0x0

    aput-object p1, v2, v3

    invoke-virtual {v0, v1, v2}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;
    :try_end_0
    .catch Ljava/lang/IllegalArgumentException; {:try_start_0 .. :try_end_0} :catch_2
    .catch Ljava/lang/IllegalAccessException; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/lang/reflect/InvocationTargetException; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    :catch_0
    move-exception v0

    .line 213
    invoke-virtual {v0}, Ljava/lang/reflect/InvocationTargetException;->printStackTrace()V

    goto :goto_0

    :catch_1
    move-exception v0

    .line 211
    invoke-virtual {v0}, Ljava/lang/IllegalAccessException;->printStackTrace()V

    goto :goto_0

    :catch_2
    move-exception v0

    .line 209
    invoke-virtual {v0}, Ljava/lang/IllegalArgumentException;->printStackTrace()V

    .line 215
    :goto_0
    invoke-super {p0, p1}, Ldalvik/system/PathClassLoader;->findLibrary(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p1

    return-object p1
.end method

.method protected findResource(Ljava/lang/String;)Ljava/net/URL;
    .locals 4

    .line 178
    :try_start_0
    iget-object v0, p0, Lcom/qihoo360/replugin/RePluginClassLoader;->findResourceMethod:Ljava/lang/reflect/Method;

    iget-object v1, p0, Lcom/qihoo360/replugin/RePluginClassLoader;->mOrig:Ljava/lang/ClassLoader;

    const/4 v2, 0x1

    new-array v2, v2, [Ljava/lang/Object;

    const/4 v3, 0x0

    aput-object p1, v2, v3

    invoke-virtual {v0, v1, v2}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/net/URL;
    :try_end_0
    .catch Ljava/lang/IllegalArgumentException; {:try_start_0 .. :try_end_0} :catch_2
    .catch Ljava/lang/IllegalAccessException; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/lang/reflect/InvocationTargetException; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    :catch_0
    move-exception v0

    .line 184
    invoke-virtual {v0}, Ljava/lang/reflect/InvocationTargetException;->printStackTrace()V

    goto :goto_0

    :catch_1
    move-exception v0

    .line 182
    invoke-virtual {v0}, Ljava/lang/IllegalAccessException;->printStackTrace()V

    goto :goto_0

    :catch_2
    move-exception v0

    .line 180
    invoke-virtual {v0}, Ljava/lang/IllegalArgumentException;->printStackTrace()V

    .line 186
    :goto_0
    invoke-super {p0, p1}, Ldalvik/system/PathClassLoader;->findResource(Ljava/lang/String;)Ljava/net/URL;

    move-result-object p1

    return-object p1
.end method

.method protected findResources(Ljava/lang/String;)Ljava/util/Enumeration;
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/Enumeration<",
            "Ljava/net/URL;",
            ">;"
        }
    .end annotation

    .line 193
    :try_start_0
    iget-object v0, p0, Lcom/qihoo360/replugin/RePluginClassLoader;->findResourcesMethod:Ljava/lang/reflect/Method;

    iget-object v1, p0, Lcom/qihoo360/replugin/RePluginClassLoader;->mOrig:Ljava/lang/ClassLoader;

    const/4 v2, 0x1

    new-array v2, v2, [Ljava/lang/Object;

    const/4 v3, 0x0

    aput-object p1, v2, v3

    invoke-virtual {v0, v1, v2}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/util/Enumeration;
    :try_end_0
    .catch Ljava/lang/IllegalArgumentException; {:try_start_0 .. :try_end_0} :catch_2
    .catch Ljava/lang/IllegalAccessException; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/lang/reflect/InvocationTargetException; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    :catch_0
    move-exception v0

    .line 199
    invoke-virtual {v0}, Ljava/lang/reflect/InvocationTargetException;->printStackTrace()V

    goto :goto_0

    :catch_1
    move-exception v0

    .line 197
    invoke-virtual {v0}, Ljava/lang/IllegalAccessException;->printStackTrace()V

    goto :goto_0

    :catch_2
    move-exception v0

    .line 195
    invoke-virtual {v0}, Ljava/lang/IllegalArgumentException;->printStackTrace()V

    .line 201
    :goto_0
    invoke-super {p0, p1}, Ldalvik/system/PathClassLoader;->findResources(Ljava/lang/String;)Ljava/util/Enumeration;

    move-result-object p1

    return-object p1
.end method

.method protected getPackage(Ljava/lang/String;)Ljava/lang/Package;
    .locals 11

    const/4 v0, 0x0

    if-eqz p1, :cond_1

    .line 224
    invoke-virtual {p1}, Ljava/lang/String;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_1

    .line 227
    :try_start_0
    iget-object v1, p0, Lcom/qihoo360/replugin/RePluginClassLoader;->getPackageMethod:Ljava/lang/reflect/Method;

    iget-object v2, p0, Lcom/qihoo360/replugin/RePluginClassLoader;->mOrig:Ljava/lang/ClassLoader;

    const/4 v3, 0x1

    new-array v3, v3, [Ljava/lang/Object;

    const/4 v4, 0x0

    aput-object p1, v3, v4

    invoke-virtual {v1, v2, v3}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    check-cast v1, Ljava/lang/Package;
    :try_end_0
    .catch Ljava/lang/IllegalArgumentException; {:try_start_0 .. :try_end_0} :catch_2
    .catch Ljava/lang/IllegalAccessException; {:try_start_0 .. :try_end_0} :catch_1
    .catch Ljava/lang/reflect/InvocationTargetException; {:try_start_0 .. :try_end_0} :catch_0

    move-object v0, v1

    goto :goto_0

    :catch_0
    move-exception v1

    .line 233
    invoke-virtual {v1}, Ljava/lang/reflect/InvocationTargetException;->printStackTrace()V

    goto :goto_0

    :catch_1
    move-exception v1

    .line 231
    invoke-virtual {v1}, Ljava/lang/IllegalAccessException;->printStackTrace()V

    goto :goto_0

    :catch_2
    move-exception v1

    .line 229
    invoke-virtual {v1}, Ljava/lang/IllegalArgumentException;->printStackTrace()V

    :goto_0
    const-string v1, "ws001"

    if-nez v0, :cond_0

    .line 237
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "NRH lcl.gp.1: n="

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/qihoo360/replugin/helper/LogRelease;->w(Ljava/lang/String;Ljava/lang/String;)I

    .line 239
    invoke-super {p0, p1}, Ldalvik/system/PathClassLoader;->getPackage(Ljava/lang/String;)Ljava/lang/Package;

    move-result-object v0

    :cond_0
    if-nez v0, :cond_1

    .line 243
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    const-string v2, "NRH lcl.gp.2: n="

    invoke-virtual {v0, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-static {v1, v0}, Lcom/qihoo360/replugin/helper/LogRelease;->w(Ljava/lang/String;Ljava/lang/String;)I

    const/4 v10, 0x0

    const-string v4, "Unknown"

    const-string v5, "0.0"

    const-string v6, "Unknown"

    const-string v7, "Unknown"

    const-string v8, "0.0"

    const-string v9, "Unknown"

    move-object v2, p0

    move-object v3, p1

    .line 245
    invoke-virtual/range {v2 .. v10}, Lcom/qihoo360/replugin/RePluginClassLoader;->definePackage(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/net/URL;)Ljava/lang/Package;

    move-result-object p1

    return-object p1

    :cond_1
    return-object v0
.end method

.method protected loadClass(Ljava/lang/String;Z)Ljava/lang/Class;
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Z)",
            "Ljava/lang/Class<",
            "*>;"
        }
    .end annotation

    .annotation system Ldalvik/annotation/Throws;
        value = {
            Ljava/lang/ClassNotFoundException;
        }
    .end annotation

    .line 147
    invoke-static {p1, p2}, Lcom/qihoo360/loader2/PMF;->loadClass(Ljava/lang/String;Z)Ljava/lang/Class;

    move-result-object v0

    if-eqz v0, :cond_0

    return-object v0

    .line 153
    :cond_0
    :try_start_0
    iget-object v0, p0, Lcom/qihoo360/replugin/RePluginClassLoader;->mOrig:Ljava/lang/ClassLoader;

    invoke-virtual {v0, p1}, Ljava/lang/ClassLoader;->loadClass(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    .line 155
    sget-boolean v1, Lcom/qihoo360/replugin/helper/LogDebug;->LOG:Z

    if-eqz v1, :cond_1

    invoke-static {}, Lcom/qihoo360/replugin/RePlugin;->getConfig()Lcom/qihoo360/replugin/RePluginConfig;

    move-result-object v1

    invoke-virtual {v1}, Lcom/qihoo360/replugin/RePluginConfig;->isPrintDetailLog()Z

    move-result v1

    if-eqz v1, :cond_1

    const-string v1, "RePluginClassLoader"

    .line 156
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    const-string v3, "loadClass: load other class, cn="

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, p1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v1, v2}, Lcom/qihoo360/replugin/helper/LogDebug;->d(Ljava/lang/String;Ljava/lang/String;)I
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_1
    return-object v0

    .line 163
    :catchall_0
    invoke-super {p0, p1, p2}, Ldalvik/system/PathClassLoader;->loadClass(Ljava/lang/String;Z)Ljava/lang/Class;

    move-result-object p1

    return-object p1
.end method

.method public toString()Ljava/lang/String;
    .locals 2

    .line 254
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {p0}, Ljava/lang/Object;->getClass()Ljava/lang/Class;

    move-result-object v1

    invoke-virtual {v1}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "[mBase="

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v1, p0, Lcom/qihoo360/replugin/RePluginClassLoader;->mOrig:Ljava/lang/ClassLoader;

    invoke-virtual {v1}, Ljava/lang/Object;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "]"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    return-object v0
.end method
