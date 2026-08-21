.class public Lcom/ss/android/downloadlib/addownload/bm;
.super Ljava/lang/Object;


# static fields
.field private static b:Lcom/ss/android/socialbase/appdownloader/q/ux;

.field private static bm:Lcom/ss/android/download/api/config/df;

.field private static c:Lcom/ss/android/download/api/config/ux;

.field private static df:Landroid/content/Context;

.field private static f:Lcom/ss/android/download/api/config/v;

.field private static fw:Lcom/ss/android/download/api/config/rz;

.field private static hq:Lcom/ss/android/download/api/config/pt;

.field private static n:Lcom/ss/android/download/api/df/rg;

.field private static oh:Lcom/ss/android/download/api/config/pp;

.field private static ou:Lcom/ss/android/download/api/config/z;

.field private static pp:Lcom/ss/android/download/api/config/hq;

.field private static pt:Lcom/ss/android/download/api/config/q;

.field private static q:Lcom/ss/android/download/api/config/fw;

.field private static qx:Lcom/ss/android/download/api/config/un;

.field private static r:Lcom/ss/android/download/api/config/oh;

.field public static final rg:Lorg/json/JSONObject;

.field private static rz:Lcom/ss/android/download/api/model/rg;

.field private static un:Lcom/ss/android/download/api/config/ou;

.field private static ux:Lcom/ss/android/download/api/config/bm;

.field private static v:Lcom/ss/android/download/api/config/b;

.field private static y:Lcom/ss/android/download/api/config/qx;

.field private static z:Lcom/ss/android/download/api/config/f;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 58
    new-instance v0, Lorg/json/JSONObject;

    invoke-direct {v0}, Lorg/json/JSONObject;-><init>()V

    sput-object v0, Lcom/ss/android/downloadlib/addownload/bm;->rg:Lorg/json/JSONObject;

    return-void
.end method

.method public static b()Lcom/ss/android/download/api/config/df;
    .locals 1

    .line 275
    sget-object v0, Lcom/ss/android/downloadlib/addownload/bm;->bm:Lcom/ss/android/download/api/config/df;

    return-object v0
.end method

.method public static bm()Lcom/ss/android/download/api/config/oh;
    .locals 1

    .line 267
    sget-object v0, Lcom/ss/android/downloadlib/addownload/bm;->r:Lcom/ss/android/download/api/config/oh;

    return-object v0
.end method

.method public static c()Lcom/ss/android/socialbase/appdownloader/q/ux;
    .locals 1

    .line 208
    sget-object v0, Lcom/ss/android/downloadlib/addownload/bm;->b:Lcom/ss/android/socialbase/appdownloader/q/ux;

    if-nez v0, :cond_0

    .line 209
    new-instance v0, Lcom/ss/android/downloadlib/addownload/bm$2;

    invoke-direct {v0}, Lcom/ss/android/downloadlib/addownload/bm$2;-><init>()V

    sput-object v0, Lcom/ss/android/downloadlib/addownload/bm;->b:Lcom/ss/android/socialbase/appdownloader/q/ux;

    .line 215
    :cond_0
    sget-object v0, Lcom/ss/android/downloadlib/addownload/bm;->b:Lcom/ss/android/socialbase/appdownloader/q/ux;

    return-object v0
.end method

.method public static df()Lcom/ss/android/download/api/config/q;
    .locals 1

    .line 166
    sget-object v0, Lcom/ss/android/downloadlib/addownload/bm;->pt:Lcom/ss/android/download/api/config/q;

    if-nez v0, :cond_0

    .line 167
    new-instance v0, Lcom/ss/android/downloadlib/addownload/bm$1;

    invoke-direct {v0}, Lcom/ss/android/downloadlib/addownload/bm$1;-><init>()V

    sput-object v0, Lcom/ss/android/downloadlib/addownload/bm;->pt:Lcom/ss/android/download/api/config/q;

    .line 184
    :cond_0
    sget-object v0, Lcom/ss/android/downloadlib/addownload/bm;->pt:Lcom/ss/android/download/api/config/q;

    return-object v0
.end method

.method public static df(Landroid/content/Context;)V
    .locals 1

    .line 92
    sget-object v0, Lcom/ss/android/downloadlib/addownload/bm;->df:Landroid/content/Context;

    if-nez v0, :cond_0

    if-eqz p0, :cond_0

    invoke-virtual {p0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 93
    invoke-virtual {p0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p0

    sput-object p0, Lcom/ss/android/downloadlib/addownload/bm;->df:Landroid/content/Context;

    :cond_0
    return-void
.end method

.method public static f()Lcom/ss/android/download/api/config/pt;
    .locals 1

    .line 303
    sget-object v0, Lcom/ss/android/downloadlib/addownload/bm;->hq:Lcom/ss/android/download/api/config/pt;

    return-object v0
.end method

.method public static fw()Lcom/ss/android/download/api/config/v;
    .locals 1

    .line 223
    sget-object v0, Lcom/ss/android/downloadlib/addownload/bm;->f:Lcom/ss/android/download/api/config/v;

    return-object v0
.end method

.method public static getContext()Landroid/content/Context;
    .locals 2

    .line 98
    sget-object v0, Lcom/ss/android/downloadlib/addownload/bm;->df:Landroid/content/Context;

    if-eqz v0, :cond_0

    return-object v0

    .line 99
    :cond_0
    new-instance v0, Ljava/lang/IllegalArgumentException;

    const-string v1, "Context is null"

    invoke-direct {v0, v1}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw v0
.end method

.method public static hq()Lcom/ss/android/download/api/config/f;
    .locals 1

    .line 280
    sget-object v0, Lcom/ss/android/downloadlib/addownload/bm;->z:Lcom/ss/android/download/api/config/f;

    return-object v0
.end method

.method public static n()Lcom/ss/android/download/api/config/qx;
    .locals 1

    .line 382
    sget-object v0, Lcom/ss/android/downloadlib/addownload/bm;->y:Lcom/ss/android/download/api/config/qx;

    if-nez v0, :cond_0

    .line 383
    new-instance v0, Lcom/ss/android/downloadlib/addownload/bm$5;

    invoke-direct {v0}, Lcom/ss/android/downloadlib/addownload/bm$5;-><init>()V

    sput-object v0, Lcom/ss/android/downloadlib/addownload/bm;->y:Lcom/ss/android/download/api/config/qx;

    .line 390
    :cond_0
    sget-object v0, Lcom/ss/android/downloadlib/addownload/bm;->y:Lcom/ss/android/download/api/config/qx;

    return-object v0
.end method

.method public static oh()Ljava/lang/String;
    .locals 1

    const-string v0, "1.7.0"

    return-object v0
.end method

.method public static ou()Ljava/lang/String;
    .locals 4

    .line 399
    :try_start_0
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object v0

    invoke-virtual {v0}, Landroid/content/Context;->getApplicationInfo()Landroid/content/pm/ApplicationInfo;

    move-result-object v0

    iget v0, v0, Landroid/content/pm/ApplicationInfo;->targetSdkVersion:I

    .line 400
    sget v1, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v2, 0x1d

    if-lt v1, v2, :cond_2

    if-ne v0, v2, :cond_0

    .line 401
    invoke-static {}, Landroid/os/Environment;->isExternalStorageLegacy()Z

    move-result v1

    if-eqz v1, :cond_1

    :cond_0
    if-le v0, v2, :cond_2

    .line 404
    :cond_1
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->getContext()Landroid/content/Context;

    move-result-object v0

    sget-object v1, Landroid/os/Environment;->DIRECTORY_DOWNLOADS:Ljava/lang/String;

    invoke-virtual {v0, v1}, Landroid/content/Context;->getExternalFilesDir(Ljava/lang/String;)Ljava/io/File;

    move-result-object v0

    invoke-virtual {v0}, Ljava/io/File;->getAbsolutePath()Ljava/lang/String;

    move-result-object v0

    return-object v0

    .line 406
    :cond_2
    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    invoke-static {}, Landroid/os/Environment;->getExternalStorageDirectory()Ljava/io/File;

    move-result-object v1

    invoke-virtual {v1}, Ljava/io/File;->getPath()Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    sget-object v1, Ljava/io/File;->separator:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    .line 407
    invoke-static {}, Lcom/ss/android/downloadlib/addownload/bm;->rz()Lorg/json/JSONObject;

    move-result-object v1

    const-string v2, "default_save_dir_name"

    const-string v3, "ByteDownload"

    invoke-virtual {v1, v2, v3}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    return-object v0

    :catchall_0
    const/4 v0, 0x0

    return-object v0
.end method

.method public static pp()Lcom/ss/android/download/api/config/rz;
    .locals 1

    .line 201
    sget-object v0, Lcom/ss/android/downloadlib/addownload/bm;->fw:Lcom/ss/android/download/api/config/rz;

    if-nez v0, :cond_0

    .line 202
    new-instance v0, Lcom/ss/android/download/api/rg/df;

    invoke-direct {v0}, Lcom/ss/android/download/api/rg/df;-><init>()V

    sput-object v0, Lcom/ss/android/downloadlib/addownload/bm;->fw:Lcom/ss/android/download/api/config/rz;

    .line 204
    :cond_0
    sget-object v0, Lcom/ss/android/downloadlib/addownload/bm;->fw:Lcom/ss/android/download/api/config/rz;

    return-object v0
.end method

.method public static pt()Lcom/ss/android/download/api/config/ux;
    .locals 1

    .line 196
    sget-object v0, Lcom/ss/android/downloadlib/addownload/bm;->c:Lcom/ss/android/download/api/config/ux;

    return-object v0
.end method

.method public static q()Lcom/ss/android/download/api/config/hq;
    .locals 1

    .line 189
    sget-object v0, Lcom/ss/android/downloadlib/addownload/bm;->pp:Lcom/ss/android/download/api/config/hq;

    if-nez v0, :cond_0

    .line 190
    new-instance v0, Lcom/ss/android/download/api/rg/rg;

    invoke-direct {v0}, Lcom/ss/android/download/api/rg/rg;-><init>()V

    sput-object v0, Lcom/ss/android/downloadlib/addownload/bm;->pp:Lcom/ss/android/download/api/config/hq;

    .line 192
    :cond_0
    sget-object v0, Lcom/ss/android/downloadlib/addownload/bm;->pp:Lcom/ss/android/download/api/config/hq;

    return-object v0
.end method

.method public static qx()Lcom/ss/android/download/api/df/rg;
    .locals 1

    .line 346
    sget-object v0, Lcom/ss/android/downloadlib/addownload/bm;->n:Lcom/ss/android/download/api/df/rg;

    if-nez v0, :cond_0

    .line 347
    new-instance v0, Lcom/ss/android/downloadlib/addownload/bm$4;

    invoke-direct {v0}, Lcom/ss/android/downloadlib/addownload/bm$4;-><init>()V

    sput-object v0, Lcom/ss/android/downloadlib/addownload/bm;->n:Lcom/ss/android/download/api/df/rg;

    .line 373
    :cond_0
    sget-object v0, Lcom/ss/android/downloadlib/addownload/bm;->n:Lcom/ss/android/download/api/df/rg;

    return-object v0
.end method

.method public static r()Lcom/ss/android/download/api/config/ou;
    .locals 1

    .line 332
    sget-object v0, Lcom/ss/android/downloadlib/addownload/bm;->un:Lcom/ss/android/download/api/config/ou;

    return-object v0
.end method

.method public static rg()Lcom/ss/android/download/api/config/fw;
    .locals 1

    .line 161
    sget-object v0, Lcom/ss/android/downloadlib/addownload/bm;->q:Lcom/ss/android/download/api/config/fw;

    return-object v0
.end method

.method public static rg(Landroid/content/Context;)V
    .locals 1

    if-eqz p0, :cond_0

    .line 85
    invoke-virtual {p0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 88
    invoke-virtual {p0}, Landroid/content/Context;->getApplicationContext()Landroid/content/Context;

    move-result-object p0

    sput-object p0, Lcom/ss/android/downloadlib/addownload/bm;->df:Landroid/content/Context;

    return-void

    .line 86
    :cond_0
    new-instance p0, Ljava/lang/IllegalArgumentException;

    const-string v0, "Context is null"

    invoke-direct {p0, v0}, Ljava/lang/IllegalArgumentException;-><init>(Ljava/lang/String;)V

    throw p0
.end method

.method public static rg(Lcom/ss/android/download/api/config/bm;)V
    .locals 0

    .line 133
    sput-object p0, Lcom/ss/android/downloadlib/addownload/bm;->ux:Lcom/ss/android/download/api/config/bm;

    return-void
.end method

.method public static rg(Lcom/ss/android/download/api/config/df;)V
    .locals 0

    .line 141
    sput-object p0, Lcom/ss/android/downloadlib/addownload/bm;->bm:Lcom/ss/android/download/api/config/df;

    return-void
.end method

.method public static rg(Lcom/ss/android/download/api/config/fw;)V
    .locals 0

    .line 105
    sput-object p0, Lcom/ss/android/downloadlib/addownload/bm;->q:Lcom/ss/android/download/api/config/fw;

    return-void
.end method

.method public static rg(Lcom/ss/android/download/api/config/hq;)V
    .locals 0

    .line 113
    sput-object p0, Lcom/ss/android/downloadlib/addownload/bm;->pp:Lcom/ss/android/download/api/config/hq;

    return-void
.end method

.method public static rg(Lcom/ss/android/download/api/config/rz;)V
    .locals 0

    .line 121
    sput-object p0, Lcom/ss/android/downloadlib/addownload/bm;->fw:Lcom/ss/android/download/api/config/rz;

    return-void
.end method

.method public static rg(Lcom/ss/android/download/api/config/ux;)V
    .locals 0

    .line 117
    sput-object p0, Lcom/ss/android/downloadlib/addownload/bm;->c:Lcom/ss/android/download/api/config/ux;

    return-void
.end method

.method public static rg(Lcom/ss/android/download/api/config/z;)V
    .locals 0

    .line 323
    sput-object p0, Lcom/ss/android/downloadlib/addownload/bm;->ou:Lcom/ss/android/download/api/config/z;

    return-void
.end method

.method public static rg(Lcom/ss/android/download/api/df/rg;)V
    .locals 0

    .line 341
    sput-object p0, Lcom/ss/android/downloadlib/addownload/bm;->n:Lcom/ss/android/download/api/df/rg;

    return-void
.end method

.method public static rg(Lcom/ss/android/download/api/model/rg;)V
    .locals 0

    .line 137
    sput-object p0, Lcom/ss/android/downloadlib/addownload/bm;->rz:Lcom/ss/android/download/api/model/rg;

    return-void
.end method

.method public static rg(Ljava/lang/String;)V
    .locals 1

    .line 284
    invoke-static {}, Lcom/ss/android/socialbase/appdownloader/pt;->bm()Lcom/ss/android/socialbase/appdownloader/pt;

    move-result-object v0

    invoke-virtual {v0, p0}, Lcom/ss/android/socialbase/appdownloader/pt;->rg(Ljava/lang/String;)V

    return-void
.end method

.method public static rz()Lorg/json/JSONObject;
    .locals 1

    .line 252
    sget-object v0, Lcom/ss/android/downloadlib/addownload/bm;->ux:Lcom/ss/android/download/api/config/bm;

    if-eqz v0, :cond_1

    invoke-interface {v0}, Lcom/ss/android/download/api/config/bm;->rg()Lorg/json/JSONObject;

    move-result-object v0

    if-nez v0, :cond_0

    goto :goto_0

    .line 255
    :cond_0
    sget-object v0, Lcom/ss/android/downloadlib/addownload/bm;->ux:Lcom/ss/android/download/api/config/bm;

    invoke-interface {v0}, Lcom/ss/android/download/api/config/bm;->rg()Lorg/json/JSONObject;

    move-result-object v0

    return-object v0

    .line 253
    :cond_1
    :goto_0
    sget-object v0, Lcom/ss/android/downloadlib/addownload/bm;->rg:Lorg/json/JSONObject;

    return-object v0
.end method

.method public static un()Lcom/ss/android/download/api/config/b;
    .locals 1

    .line 319
    sget-object v0, Lcom/ss/android/downloadlib/addownload/bm;->v:Lcom/ss/android/download/api/config/b;

    return-object v0
.end method

.method public static ux()Lcom/ss/android/download/api/config/un;
    .locals 1

    .line 232
    sget-object v0, Lcom/ss/android/downloadlib/addownload/bm;->qx:Lcom/ss/android/download/api/config/un;

    if-nez v0, :cond_0

    .line 233
    new-instance v0, Lcom/ss/android/downloadlib/addownload/bm$3;

    invoke-direct {v0}, Lcom/ss/android/downloadlib/addownload/bm$3;-><init>()V

    sput-object v0, Lcom/ss/android/downloadlib/addownload/bm;->qx:Lcom/ss/android/download/api/config/un;

    .line 247
    :cond_0
    sget-object v0, Lcom/ss/android/downloadlib/addownload/bm;->qx:Lcom/ss/android/download/api/config/un;

    return-object v0
.end method

.method public static v()Lcom/ss/android/download/api/config/pp;
    .locals 1

    .line 311
    sget-object v0, Lcom/ss/android/downloadlib/addownload/bm;->oh:Lcom/ss/android/download/api/config/pp;

    return-object v0
.end method

.method public static y()Z
    .locals 1

    .line 414
    sget-object v0, Lcom/ss/android/downloadlib/addownload/bm;->q:Lcom/ss/android/download/api/config/fw;

    if-eqz v0, :cond_1

    sget-object v0, Lcom/ss/android/downloadlib/addownload/bm;->c:Lcom/ss/android/download/api/config/ux;

    if-eqz v0, :cond_1

    sget-object v0, Lcom/ss/android/downloadlib/addownload/bm;->ux:Lcom/ss/android/download/api/config/bm;

    if-eqz v0, :cond_1

    sget-object v0, Lcom/ss/android/downloadlib/addownload/bm;->bm:Lcom/ss/android/download/api/config/df;

    if-eqz v0, :cond_1

    sget-object v0, Lcom/ss/android/downloadlib/addownload/bm;->ou:Lcom/ss/android/download/api/config/z;

    if-nez v0, :cond_0

    goto :goto_0

    :cond_0
    const/4 v0, 0x1

    return v0

    :cond_1
    :goto_0
    const/4 v0, 0x0

    return v0
.end method

.method public static z()Lcom/ss/android/download/api/config/z;
    .locals 1

    .line 328
    sget-object v0, Lcom/ss/android/downloadlib/addownload/bm;->ou:Lcom/ss/android/download/api/config/z;

    return-object v0
.end method
