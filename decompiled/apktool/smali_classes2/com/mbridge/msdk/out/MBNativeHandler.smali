.class public Lcom/mbridge/msdk/out/MBNativeHandler;
.super Lcom/mbridge/msdk/out/MBCommonHandler;
.source "MBNativeHandler.java"


# annotations
.annotation system Ldalvik/annotation/MemberClasses;
    value = {
        Lcom/mbridge/msdk/out/MBNativeHandler$KeyWordInfo;
    }
.end annotation


# static fields
.field public static final OPERATE_LOAD:I = 0x1

.field public static final OPERATE_LOAD_FRAME:I = 0x2

.field private static final TAG:Ljava/lang/String;

.field public static final TEMPLATE_ID:Ljava/lang/String; = "id"

.field public static final TEMPLATE_NUM:Ljava/lang/String; = "ad_num"

.field private static mUnitID:Ljava/lang/String;


# instance fields
.field private adListener:Lcom/mbridge/msdk/mbnative/c/a;

.field private clickControler:Lcom/mbridge/msdk/click/b;

.field private context:Landroid/content/Context;

.field private map:Ljava/util/Map;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation
.end field

.field private nativeProvider:Lcom/mbridge/msdk/mbnative/e/a;

.field private templateList:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/out/NativeListener$Template;",
            ">;"
        }
    .end annotation
.end field

.field private trackingListener:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 43
    const-class v0, Lcom/mbridge/msdk/out/MBNativeHandler;

    invoke-virtual {v0}, Ljava/lang/Class;->getName()Ljava/lang/String;

    move-result-object v0

    sput-object v0, Lcom/mbridge/msdk/out/MBNativeHandler;->TAG:Ljava/lang/String;

    return-void
.end method

.method public constructor <init>(Landroid/content/Context;)V
    .locals 2

    .line 52
    invoke-direct {p0}, Lcom/mbridge/msdk/out/MBCommonHandler;-><init>()V

    .line 35
    new-instance v0, Lcom/mbridge/msdk/mbnative/c/a;

    invoke-direct {v0}, Lcom/mbridge/msdk/mbnative/c/a;-><init>()V

    iput-object v0, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->adListener:Lcom/mbridge/msdk/mbnative/c/a;

    .line 53
    iput-object p1, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->context:Landroid/content/Context;

    .line 54
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    if-nez v0, :cond_0

    if-eqz p1, :cond_0

    .line 55
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/foundation/controller/a;->b(Landroid/content/Context;)V

    .line 58
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->map:Ljava/util/Map;

    if-eqz p1, :cond_2

    const-string v0, "unit_id"

    invoke-interface {p1, v0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result p1

    if-eqz p1, :cond_2

    .line 59
    iget-object p1, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->map:Ljava/util/Map;

    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    .line 60
    iget-object v0, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->adListener:Lcom/mbridge/msdk/mbnative/c/a;

    if-eqz v0, :cond_1

    .line 61
    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/mbnative/c/a;->a(Ljava/lang/String;)V

    .line 63
    :cond_1
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_2

    .line 64
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/ae;->f(Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    .line 65
    invoke-static {v0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-nez v1, :cond_2

    .line 66
    invoke-static {p1, v0}, Lcom/mbridge/msdk/foundation/tools/ae;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_2
    return-void
.end method

.method public constructor <init>(Ljava/util/Map;Landroid/content/Context;)V
    .locals 3
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;",
            "Landroid/content/Context;",
            ")V"
        }
    .end annotation

    const-string v0, "native_video_height"

    const-string v1, "native_video_width"

    .line 73
    invoke-direct {p0, p1, p2}, Lcom/mbridge/msdk/out/MBCommonHandler;-><init>(Ljava/util/Map;Landroid/content/Context;)V

    .line 35
    new-instance v2, Lcom/mbridge/msdk/mbnative/c/a;

    invoke-direct {v2}, Lcom/mbridge/msdk/mbnative/c/a;-><init>()V

    iput-object v2, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->adListener:Lcom/mbridge/msdk/mbnative/c/a;

    .line 74
    iput-object p2, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->context:Landroid/content/Context;

    .line 75
    iput-object p1, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->map:Ljava/util/Map;

    .line 76
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v2

    if-nez v2, :cond_0

    if-eqz p2, :cond_0

    .line 77
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v2

    invoke-virtual {v2, p2}, Lcom/mbridge/msdk/foundation/controller/a;->b(Landroid/content/Context;)V

    :cond_0
    const-string p2, "unit_id"

    if-eqz p1, :cond_1

    .line 81
    :try_start_0
    invoke-interface {p1, p2}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_1

    .line 82
    invoke-interface {p1, p2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    if-eqz v2, :cond_1

    .line 83
    invoke-interface {p1, p2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    instance-of v2, v2, Ljava/lang/String;

    if-eqz v2, :cond_1

    .line 85
    invoke-interface {p1, v1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v2

    if-eqz v2, :cond_1

    .line 86
    invoke-interface {p1, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v2

    if-eqz v2, :cond_1

    .line 87
    invoke-interface {p1, v1}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    instance-of v1, v1, Ljava/lang/Integer;

    if-eqz v1, :cond_1

    .line 89
    invoke-interface {p1, v0}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v1

    if-eqz v1, :cond_1

    .line 90
    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v1

    if-eqz v1, :cond_1

    .line 91
    invoke-interface {p1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    instance-of v0, v0, Ljava/lang/Integer;
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    goto :goto_0

    :catchall_0
    move-exception v0

    .line 94
    invoke-virtual {v0}, Ljava/lang/Throwable;->printStackTrace()V

    :cond_1
    :goto_0
    if-eqz p1, :cond_3

    .line 97
    invoke-interface {p1, p2}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_3

    .line 98
    invoke-interface {p1, p2}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p1

    check-cast p1, Ljava/lang/String;

    .line 99
    iget-object p2, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->adListener:Lcom/mbridge/msdk/mbnative/c/a;

    if-eqz p2, :cond_2

    .line 100
    invoke-virtual {p2, p1}, Lcom/mbridge/msdk/mbnative/c/a;->a(Ljava/lang/String;)V

    .line 102
    :cond_2
    invoke-static {p1}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result p2

    if-nez p2, :cond_3

    .line 103
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/ae;->f(Ljava/lang/String;)Ljava/lang/String;

    move-result-object p2

    .line 104
    invoke-static {p2}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v0

    if-nez v0, :cond_3

    .line 105
    invoke-static {p1, p2}, Lcom/mbridge/msdk/foundation/tools/ae;->a(Ljava/lang/String;Ljava/lang/String;)V

    :cond_3
    return-void
.end method

.method public static getNativeProperties(Ljava/lang/String;Ljava/lang/String;)Ljava/util/Map;
    .locals 2
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/lang/String;",
            "Ljava/lang/String;",
            ")",
            "Ljava/util/Map<",
            "Ljava/lang/String;",
            "Ljava/lang/Object;",
            ">;"
        }
    .end annotation

    .line 121
    new-instance v0, Ljava/util/HashMap;

    invoke-direct {v0}, Ljava/util/HashMap;-><init>()V

    .line 122
    sput-object p1, Lcom/mbridge/msdk/out/MBNativeHandler;->mUnitID:Ljava/lang/String;

    const-string v1, "unit_id"

    .line 123
    invoke-interface {v0, v1, p1}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 124
    sget-object p1, Lcom/mbridge/msdk/MBridgeConstans;->PLACEMENT_ID:Ljava/lang/String;

    invoke-static {p0}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v1

    if-eqz v1, :cond_0

    const-string p0, ""

    :cond_0
    invoke-interface {v0, p1, p0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const-string p0, "MVNativePlugin"

    .line 125
    filled-new-array {p0}, [Ljava/lang/String;

    move-result-object p0

    const-string p1, "plugin_name"

    invoke-interface {v0, p1, p0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    const/4 p0, 0x0

    .line 126
    invoke-static {p0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object p0

    const-string p1, "layout_type"

    invoke-interface {v0, p1, p0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    return-object v0
.end method

.method public static getTemplateString(Ljava/util/List;)Ljava/lang/String;
    .locals 6
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/out/NativeListener$Template;",
            ">;)",
            "Ljava/lang/String;"
        }
    .end annotation

    if-eqz p0, :cond_1

    .line 171
    :try_start_0
    invoke-interface {p0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_1

    const-string v0, "[{$native_info}]"

    .line 173
    new-instance v1, Ljava/lang/StringBuffer;

    invoke-direct {v1}, Ljava/lang/StringBuffer;-><init>()V

    .line 174
    invoke-interface {p0}, Ljava/util/List;->iterator()Ljava/util/Iterator;

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

    check-cast v2, Lcom/mbridge/msdk/out/NativeListener$Template;

    const-string v4, "{\"id\":"

    .line 175
    invoke-virtual {v1, v4}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2}, Lcom/mbridge/msdk/out/NativeListener$Template;->getId()I

    move-result v5

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    const-string v3, "\"ad_num\":"

    .line 176
    invoke-virtual {v1, v3}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2}, Lcom/mbridge/msdk/out/NativeListener$Template;->getAdNum()I

    move-result v2

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v2, "},"

    invoke-virtual {v3, v2}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-virtual {v1, v2}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    goto :goto_0

    :cond_0
    const-string p0, "{$native_info}"

    const/4 v2, 0x0

    .line 179
    invoke-virtual {v1, v3}, Ljava/lang/StringBuffer;->lastIndexOf(Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v1, v2, v3}, Ljava/lang/StringBuffer;->subSequence(II)Ljava/lang/CharSequence;

    move-result-object v1

    .line 178
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

.method private loadMB()Z
    .locals 4

    .line 235
    iget-object v0, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->properties:Ljava/util/Map;

    if-eqz v0, :cond_2

    iget-object v0, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->properties:Ljava/util/Map;

    const-string v1, "unit_id"

    invoke-interface {v0, v1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_2

    .line 236
    iget-object v0, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->templateList:Ljava/util/List;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_0

    .line 238
    :try_start_0
    invoke-virtual {p0}, Lcom/mbridge/msdk/out/MBNativeHandler;->buildTemplateString()Ljava/lang/String;

    move-result-object v0

    .line 239
    iget-object v1, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->properties:Ljava/util/Map;

    const-string v2, "native_info"

    invoke-interface {v1, v2, v0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    const-string v0, "com.mbridge.msdk"

    const-string v1, "MBSDK set template error"

    .line 241
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;)V

    .line 245
    :cond_0
    :goto_0
    :try_start_1
    iget-object v0, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->properties:Ljava/util/Map;

    const-string v1, "handler_controller"

    invoke-interface {v0, v1, p0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 246
    iget-object v0, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->nativeProvider:Lcom/mbridge/msdk/mbnative/e/a;

    if-nez v0, :cond_1

    .line 247
    new-instance v0, Lcom/mbridge/msdk/mbnative/e/a;

    iget-object v1, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->adListener:Lcom/mbridge/msdk/mbnative/c/a;

    iget-object v2, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->trackingListener:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    invoke-direct {v0, v1, v2}, Lcom/mbridge/msdk/mbnative/e/a;-><init>(Lcom/mbridge/msdk/mbnative/c/a;Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;)V

    iput-object v0, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->nativeProvider:Lcom/mbridge/msdk/mbnative/e/a;

    .line 248
    iget-object v1, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->context:Landroid/content/Context;

    const/4 v2, 0x0

    iget-object v3, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->properties:Ljava/util/Map;

    invoke-virtual {v0, v1, v2, v3}, Lcom/mbridge/msdk/mbnative/e/a;->a(Landroid/content/Context;Landroid/content/res/Resources;Ljava/util/Map;)V

    .line 250
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->nativeProvider:Lcom/mbridge/msdk/mbnative/e/a;

    invoke-virtual {v0}, Lcom/mbridge/msdk/mbnative/e/a;->a()V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_1

    :catch_1
    move-exception v0

    .line 252
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    goto :goto_1

    :cond_2
    const-string v0, ""

    const-string v1, "no unit id."

    .line 256
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;)V

    :goto_1
    const/4 v0, 0x1

    return v0
.end method

.method private loadMBFrame()Z
    .locals 4

    .line 271
    iget-object v0, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->templateList:Ljava/util/List;

    if-eqz v0, :cond_0

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_0

    .line 273
    :try_start_0
    invoke-virtual {p0}, Lcom/mbridge/msdk/out/MBNativeHandler;->buildTemplateString()Ljava/lang/String;

    move-result-object v0

    .line 274
    iget-object v1, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->properties:Ljava/util/Map;

    const-string v2, "native_info"

    invoke-interface {v1, v2, v0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    const-string v0, "com.mbridge.msdk"

    const-string v1, "MBSDK set template error"

    .line 276
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;)V

    .line 280
    :cond_0
    :goto_0
    :try_start_1
    iget-object v0, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->properties:Ljava/util/Map;

    const-string v1, "handler_controller"

    invoke-interface {v0, v1, p0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 281
    iget-object v0, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->nativeProvider:Lcom/mbridge/msdk/mbnative/e/a;

    if-nez v0, :cond_1

    .line 282
    new-instance v0, Lcom/mbridge/msdk/mbnative/e/a;

    iget-object v1, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->adListener:Lcom/mbridge/msdk/mbnative/c/a;

    iget-object v2, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->trackingListener:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    invoke-direct {v0, v1, v2}, Lcom/mbridge/msdk/mbnative/e/a;-><init>(Lcom/mbridge/msdk/mbnative/c/a;Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;)V

    iput-object v0, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->nativeProvider:Lcom/mbridge/msdk/mbnative/e/a;

    .line 283
    iget-object v1, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->context:Landroid/content/Context;

    const/4 v2, 0x0

    iget-object v3, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->properties:Ljava/util/Map;

    invoke-virtual {v0, v1, v2, v3}, Lcom/mbridge/msdk/mbnative/e/a;->a(Landroid/content/Context;Landroid/content/res/Resources;Ljava/util/Map;)V

    .line 285
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->nativeProvider:Lcom/mbridge/msdk/mbnative/e/a;

    invoke-virtual {v0}, Lcom/mbridge/msdk/mbnative/e/a;->b()V
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_1

    goto :goto_1

    :catch_1
    move-exception v0

    .line 287
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_1
    const/4 v0, 0x1

    return v0
.end method

.method public static parseKeyWordInfoListStr(Ljava/util/List;)Ljava/lang/String;
    .locals 7
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Ljava/util/List<",
            "Lcom/mbridge/msdk/out/MBNativeHandler$KeyWordInfo;",
            ">;)",
            "Ljava/lang/String;"
        }
    .end annotation

    if-eqz p0, :cond_5

    .line 188
    invoke-interface {p0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_5

    .line 190
    :try_start_0
    new-instance v0, Lorg/json/JSONArray;

    invoke-direct {v0}, Lorg/json/JSONArray;-><init>()V

    const/4 v1, 0x0

    move v2, v1

    .line 191
    :goto_0
    invoke-interface {p0}, Ljava/util/List;->size()I

    move-result v3

    if-ge v2, v3, :cond_4

    .line 192
    new-instance v3, Lorg/json/JSONObject;

    invoke-direct {v3}, Lorg/json/JSONObject;-><init>()V

    .line 193
    invoke-interface {p0, v2}, Ljava/util/List;->get(I)Ljava/lang/Object;

    move-result-object v4

    check-cast v4, Lcom/mbridge/msdk/out/MBNativeHandler$KeyWordInfo;

    .line 194
    invoke-virtual {v4}, Lcom/mbridge/msdk/out/MBNativeHandler$KeyWordInfo;->getKeyWordPN()Ljava/lang/String;

    move-result-object v5

    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_3

    .line 195
    invoke-virtual {v4}, Lcom/mbridge/msdk/out/MBNativeHandler$KeyWordInfo;->getKeyWorkVN()Ljava/lang/String;

    move-result-object v5

    invoke-static {v5}, Landroid/text/TextUtils;->isEmpty(Ljava/lang/CharSequence;)Z

    move-result v5

    if-nez v5, :cond_3

    const-string v5, "p"

    .line 196
    invoke-virtual {v4}, Lcom/mbridge/msdk/out/MBNativeHandler$KeyWordInfo;->getKeyWordPN()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v3, v5, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    const-string v5, "v"

    .line 197
    invoke-virtual {v4}, Lcom/mbridge/msdk/out/MBNativeHandler$KeyWordInfo;->getKeyWorkVN()Ljava/lang/String;

    move-result-object v6

    invoke-virtual {v3, v5, v6}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;

    .line 198
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v5

    if-eqz v5, :cond_2

    .line 200
    invoke-virtual {v5, v1}, Lcom/mbridge/msdk/foundation/controller/a;->a(Z)Ljava/util/List;

    move-result-object v5
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const-string v6, "i"

    if-eqz v5, :cond_1

    .line 202
    :try_start_1
    invoke-virtual {v4}, Lcom/mbridge/msdk/out/MBNativeHandler$KeyWordInfo;->getKeyWordPN()Ljava/lang/String;

    move-result-object v4

    invoke-interface {v5, v4}, Ljava/util/List;->contains(Ljava/lang/Object;)Z

    move-result v4

    if-eqz v4, :cond_0

    const/4 v4, 0x1

    .line 203
    invoke-virtual {v3, v6, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    goto :goto_1

    .line 205
    :cond_0
    invoke-virtual {v3, v6, v1}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    goto :goto_1

    :cond_1
    const/4 v4, 0x2

    .line 208
    invoke-virtual {v3, v6, v4}, Lorg/json/JSONObject;->put(Ljava/lang/String;I)Lorg/json/JSONObject;

    .line 211
    :cond_2
    :goto_1
    invoke-virtual {v0, v3}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;

    :cond_3
    add-int/lit8 v2, v2, 0x1

    goto :goto_0

    .line 214
    :cond_4
    invoke-virtual {v0}, Lorg/json/JSONArray;->toString()Ljava/lang/String;

    move-result-object p0
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    return-object p0

    :catch_0
    move-exception p0

    .line 216
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    .line 217
    sget-object v0, Lcom/mbridge/msdk/out/MBNativeHandler;->TAG:Ljava/lang/String;

    invoke-virtual {p0}, Ljava/lang/Exception;->getMessage()Ljava/lang/String;

    move-result-object p0

    invoke-static {v0, p0}, Lcom/mbridge/msdk/foundation/tools/z;->d(Ljava/lang/String;Ljava/lang/String;)V

    :cond_5
    const/4 p0, 0x0

    return-object p0
.end method


# virtual methods
.method public addTemplate(Lcom/mbridge/msdk/out/NativeListener$Template;)V
    .locals 1

    if-eqz p1, :cond_1

    .line 132
    iget-object v0, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->templateList:Ljava/util/List;

    if-nez v0, :cond_0

    .line 133
    new-instance v0, Ljava/util/ArrayList;

    invoke-direct {v0}, Ljava/util/ArrayList;-><init>()V

    iput-object v0, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->templateList:Ljava/util/List;

    .line 135
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->templateList:Ljava/util/List;

    invoke-interface {v0, p1}, Ljava/util/List;->add(Ljava/lang/Object;)Z

    :cond_1
    return-void
.end method

.method public buildTemplateString()Ljava/lang/String;
    .locals 7

    .line 153
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->templateList:Ljava/util/List;

    if-eqz v0, :cond_1

    iget-object v0, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->templateList:Ljava/util/List;

    invoke-interface {v0}, Ljava/util/List;->size()I

    move-result v0

    if-lez v0, :cond_1

    const-string v0, "[{$native_info}]"

    .line 155
    new-instance v1, Ljava/lang/StringBuffer;

    invoke-direct {v1}, Ljava/lang/StringBuffer;-><init>()V

    .line 156
    iget-object v2, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->templateList:Ljava/util/List;

    invoke-interface {v2}, Ljava/util/List;->iterator()Ljava/util/Iterator;

    move-result-object v2

    :goto_0
    invoke-interface {v2}, Ljava/util/Iterator;->hasNext()Z

    move-result v3
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    const-string v4, ","

    if-eqz v3, :cond_0

    :try_start_1
    invoke-interface {v2}, Ljava/util/Iterator;->next()Ljava/lang/Object;

    move-result-object v3

    check-cast v3, Lcom/mbridge/msdk/out/NativeListener$Template;

    const-string v5, "{\"id\":"

    .line 157
    invoke-virtual {v1, v5}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    new-instance v5, Ljava/lang/StringBuilder;

    invoke-direct {v5}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3}, Lcom/mbridge/msdk/out/NativeListener$Template;->getId()I

    move-result v6

    invoke-virtual {v5, v6}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v5, v4}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v5}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-virtual {v1, v4}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    const-string v4, "\"ad_num\":"

    .line 158
    invoke-virtual {v1, v4}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3}, Lcom/mbridge/msdk/out/NativeListener$Template;->getAdNum()I

    move-result v3

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    const-string v3, "},"

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-virtual {v1, v3}, Ljava/lang/StringBuffer;->append(Ljava/lang/String;)Ljava/lang/StringBuffer;

    goto :goto_0

    :cond_0
    const-string v2, "{$native_info}"

    const/4 v3, 0x0

    .line 161
    invoke-virtual {v1, v4}, Ljava/lang/StringBuffer;->lastIndexOf(Ljava/lang/String;)I

    move-result v4

    invoke-virtual {v1, v3, v4}, Ljava/lang/StringBuffer;->subSequence(II)Ljava/lang/CharSequence;

    move-result-object v1

    .line 160
    invoke-virtual {v0, v2, v1}, Ljava/lang/String;->replace(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)Ljava/lang/String;

    move-result-object v0
    :try_end_1
    .catch Ljava/lang/Exception; {:try_start_1 .. :try_end_1} :catch_0

    return-object v0

    :catch_0
    :cond_1
    const/4 v0, 0x0

    return-object v0
.end method

.method public clearCacheByUnitid(Ljava/lang/String;)V
    .locals 1

    .line 412
    :try_start_0
    invoke-static {p1}, Lcom/mbridge/msdk/foundation/tools/ai;->a(Ljava/lang/String;)Z

    move-result v0

    if-eqz v0, :cond_0

    return-void

    .line 416
    :cond_0
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v0

    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/i;->a(Landroid/content/Context;)Lcom/mbridge/msdk/foundation/db/i;

    move-result-object v0

    .line 415
    invoke-static {v0}, Lcom/mbridge/msdk/foundation/db/f;->a(Lcom/mbridge/msdk/foundation/db/h;)Lcom/mbridge/msdk/foundation/db/f;

    move-result-object v0

    .line 417
    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/foundation/db/f;->c(Ljava/lang/String;)V

    const/4 v0, 0x3

    .line 419
    invoke-static {v0}, Lcom/mbridge/msdk/mbnative/a/f;->a(I)Lcom/mbridge/msdk/mbnative/a/b;

    move-result-object v0

    .line 420
    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/mbnative/a/b;->a(Ljava/lang/String;)V

    const/4 v0, 0x6

    .line 422
    invoke-static {v0}, Lcom/mbridge/msdk/mbnative/a/f;->a(I)Lcom/mbridge/msdk/mbnative/a/b;

    move-result-object v0

    .line 423
    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/mbnative/a/b;->a(Ljava/lang/String;)V

    const/4 v0, 0x7

    .line 425
    invoke-static {v0}, Lcom/mbridge/msdk/mbnative/a/f;->a(I)Lcom/mbridge/msdk/mbnative/a/b;

    move-result-object v0

    .line 426
    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/mbnative/a/b;->a(Ljava/lang/String;)V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p1

    .line 428
    invoke-virtual {p1}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method

.method public clearVideoCache()V
    .locals 1

    .line 402
    :try_start_0
    iget-object v0, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->nativeProvider:Lcom/mbridge/msdk/mbnative/e/a;

    if-eqz v0, :cond_0

    .line 403
    iget-object v0, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->nativeProvider:Lcom/mbridge/msdk/mbnative/e/a;

    invoke-virtual {v0}, Lcom/mbridge/msdk/mbnative/e/a;->c()V
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 406
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method

.method public dismissConfirmDialog()V
    .locals 1

    .line 444
    invoke-static {}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->a()Lcom/mbridge/msdk/mbjscommon/confirmation/e;

    move-result-object v0

    invoke-virtual {v0}, Lcom/mbridge/msdk/mbjscommon/confirmation/e;->c()V

    return-void
.end method

.method public getAdListener()Lcom/mbridge/msdk/mbnative/c/a;
    .locals 1

    .line 345
    iget-object v0, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->adListener:Lcom/mbridge/msdk/mbnative/c/a;

    return-object v0
.end method

.method public getRequestId()Ljava/lang/String;
    .locals 1

    .line 437
    iget-object v0, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->nativeProvider:Lcom/mbridge/msdk/mbnative/e/a;

    if-eqz v0, :cond_0

    .line 438
    invoke-virtual {v0}, Lcom/mbridge/msdk/mbnative/e/a;->e()Ljava/lang/String;

    move-result-object v0

    return-object v0

    :cond_0
    const-string v0, ""

    return-object v0
.end method

.method public getTrackingListener()Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;
    .locals 1

    .line 359
    iget-object v0, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->trackingListener:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    return-object v0
.end method

.method public handleResult(Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V
    .locals 3

    .line 140
    iget-object v0, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->clickControler:Lcom/mbridge/msdk/click/b;

    if-nez v0, :cond_1

    const/4 v0, 0x0

    .line 142
    iget-object v1, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->map:Ljava/util/Map;

    if-eqz v1, :cond_0

    const-string v0, "unit_id"

    .line 143
    invoke-interface {v1, v0}, Ljava/util/Map;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object v0

    check-cast v0, Ljava/lang/String;

    .line 145
    :cond_0
    new-instance v1, Lcom/mbridge/msdk/click/b;

    iget-object v2, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->context:Landroid/content/Context;

    invoke-direct {v1, v2, v0}, Lcom/mbridge/msdk/click/b;-><init>(Landroid/content/Context;Ljava/lang/String;)V

    iput-object v1, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->clickControler:Lcom/mbridge/msdk/click/b;

    .line 147
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->clickControler:Lcom/mbridge/msdk/click/b;

    invoke-virtual {v0, p1, p2}, Lcom/mbridge/msdk/click/b;->a(Lcom/mbridge/msdk/out/Campaign;Ljava/lang/String;)V

    return-void
.end method

.method public load()Z
    .locals 2

    .line 226
    iget-object v0, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->properties:Ljava/util/Map;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->properties:Ljava/util/Map;

    const-string v1, "unit_id"

    invoke-interface {v0, v1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 227
    invoke-direct {p0}, Lcom/mbridge/msdk/out/MBNativeHandler;->loadMB()Z

    goto :goto_0

    :cond_0
    const-string v0, ""

    const-string v1, "no unit id."

    .line 229
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    const/4 v0, 0x1

    return v0
.end method

.method public loadFrame()Z
    .locals 2

    .line 262
    iget-object v0, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->properties:Ljava/util/Map;

    if-eqz v0, :cond_0

    iget-object v0, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->properties:Ljava/util/Map;

    const-string v1, "unit_id"

    invoke-interface {v0, v1}, Ljava/util/Map;->containsKey(Ljava/lang/Object;)Z

    move-result v0

    if-eqz v0, :cond_0

    .line 263
    invoke-direct {p0}, Lcom/mbridge/msdk/out/MBNativeHandler;->loadMBFrame()Z

    goto :goto_0

    :cond_0
    const-string v0, ""

    const-string v1, "no unit id."

    .line 265
    invoke-static {v0, v1}, Lcom/mbridge/msdk/foundation/tools/z;->c(Ljava/lang/String;Ljava/lang/String;)V

    :goto_0
    const/4 v0, 0x1

    return v0
.end method

.method public registerView(Landroid/view/View;Lcom/mbridge/msdk/out/Campaign;)V
    .locals 4

    .line 293
    iget-object v0, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->nativeProvider:Lcom/mbridge/msdk/mbnative/e/a;

    if-nez v0, :cond_1

    .line 294
    new-instance v0, Lcom/mbridge/msdk/mbnative/e/a;

    iget-object v1, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->adListener:Lcom/mbridge/msdk/mbnative/c/a;

    iget-object v2, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->trackingListener:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    invoke-direct {v0, v1, v2}, Lcom/mbridge/msdk/mbnative/e/a;-><init>(Lcom/mbridge/msdk/mbnative/c/a;Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;)V

    iput-object v0, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->nativeProvider:Lcom/mbridge/msdk/mbnative/e/a;

    .line 295
    iget-object v0, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->properties:Ljava/util/Map;

    if-eqz v0, :cond_0

    .line 296
    iget-object v0, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->properties:Ljava/util/Map;

    const-string v1, "handler_controller"

    invoke-interface {v0, v1, p0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 298
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->nativeProvider:Lcom/mbridge/msdk/mbnative/e/a;

    iget-object v1, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->context:Landroid/content/Context;

    const/4 v2, 0x0

    iget-object v3, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->properties:Ljava/util/Map;

    invoke-virtual {v0, v1, v2, v3}, Lcom/mbridge/msdk/mbnative/e/a;->a(Landroid/content/Context;Landroid/content/res/Resources;Ljava/util/Map;)V

    .line 300
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->nativeProvider:Lcom/mbridge/msdk/mbnative/e/a;

    invoke-virtual {v0, p1, p2}, Lcom/mbridge/msdk/mbnative/e/a;->a(Landroid/view/View;Lcom/mbridge/msdk/out/Campaign;)V

    return-void
.end method

.method public registerView(Landroid/view/View;Ljava/util/List;Lcom/mbridge/msdk/out/Campaign;)V
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/view/View;",
            "Ljava/util/List<",
            "Landroid/view/View;",
            ">;",
            "Lcom/mbridge/msdk/out/Campaign;",
            ")V"
        }
    .end annotation

    .line 304
    iget-object v0, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->nativeProvider:Lcom/mbridge/msdk/mbnative/e/a;

    if-nez v0, :cond_1

    .line 305
    new-instance v0, Lcom/mbridge/msdk/mbnative/e/a;

    iget-object v1, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->adListener:Lcom/mbridge/msdk/mbnative/c/a;

    iget-object v2, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->trackingListener:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    invoke-direct {v0, v1, v2}, Lcom/mbridge/msdk/mbnative/e/a;-><init>(Lcom/mbridge/msdk/mbnative/c/a;Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;)V

    iput-object v0, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->nativeProvider:Lcom/mbridge/msdk/mbnative/e/a;

    .line 306
    iget-object v0, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->properties:Ljava/util/Map;

    if-eqz v0, :cond_0

    .line 307
    iget-object v0, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->properties:Ljava/util/Map;

    const-string v1, "handler_controller"

    invoke-interface {v0, v1, p0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 309
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->nativeProvider:Lcom/mbridge/msdk/mbnative/e/a;

    iget-object v1, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->context:Landroid/content/Context;

    const/4 v2, 0x0

    iget-object v3, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->properties:Ljava/util/Map;

    invoke-virtual {v0, v1, v2, v3}, Lcom/mbridge/msdk/mbnative/e/a;->a(Landroid/content/Context;Landroid/content/res/Resources;Ljava/util/Map;)V

    .line 311
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->nativeProvider:Lcom/mbridge/msdk/mbnative/e/a;

    invoke-virtual {v0, p1, p2, p3}, Lcom/mbridge/msdk/mbnative/e/a;->a(Landroid/view/View;Ljava/util/List;Lcom/mbridge/msdk/out/Campaign;)V

    return-void
.end method

.method public release()V
    .locals 1

    .line 338
    iget-object v0, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->nativeProvider:Lcom/mbridge/msdk/mbnative/e/a;

    if-eqz v0, :cond_0

    .line 339
    invoke-virtual {v0}, Lcom/mbridge/msdk/mbnative/e/a;->d()V

    :cond_0
    const/4 v0, 0x0

    .line 341
    iput-object v0, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->trackingListener:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    return-void
.end method

.method public setAdListener(Lcom/mbridge/msdk/out/NativeListener$NativeAdListener;)V
    .locals 1

    .line 349
    new-instance v0, Lcom/mbridge/msdk/mbnative/c/a;

    invoke-direct {v0, p1}, Lcom/mbridge/msdk/mbnative/c/a;-><init>(Lcom/mbridge/msdk/out/NativeListener$NativeAdListener;)V

    iput-object v0, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->adListener:Lcom/mbridge/msdk/mbnative/c/a;

    if-eqz v0, :cond_0

    .line 351
    sget-object p1, Lcom/mbridge/msdk/out/MBNativeHandler;->mUnitID:Ljava/lang/String;

    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/mbnative/c/a;->a(Ljava/lang/String;)V

    .line 353
    :cond_0
    iget-object p1, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->nativeProvider:Lcom/mbridge/msdk/mbnative/e/a;

    if-eqz p1, :cond_1

    .line 354
    iget-object v0, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->adListener:Lcom/mbridge/msdk/mbnative/c/a;

    invoke-virtual {p1, v0}, Lcom/mbridge/msdk/mbnative/e/a;->a(Lcom/mbridge/msdk/mbnative/c/a;)V

    :cond_1
    return-void
.end method

.method public setMustBrowser(Z)V
    .locals 0

    .line 49
    sput-boolean p1, Lcom/mbridge/msdk/foundation/tools/ad;->b:Z

    return-void
.end method

.method public setTrackingListener(Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;)V
    .locals 1

    .line 363
    iput-object p1, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->trackingListener:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    .line 364
    iget-object v0, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->nativeProvider:Lcom/mbridge/msdk/mbnative/e/a;

    if-eqz v0, :cond_0

    .line 365
    invoke-virtual {v0, p1}, Lcom/mbridge/msdk/mbnative/e/a;->a(Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;)V

    :cond_0
    return-void
.end method

.method public unregisterView(Landroid/view/View;Lcom/mbridge/msdk/out/Campaign;)V
    .locals 4

    .line 315
    iget-object v0, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->nativeProvider:Lcom/mbridge/msdk/mbnative/e/a;

    if-nez v0, :cond_1

    .line 316
    new-instance v0, Lcom/mbridge/msdk/mbnative/e/a;

    iget-object v1, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->adListener:Lcom/mbridge/msdk/mbnative/c/a;

    iget-object v2, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->trackingListener:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    invoke-direct {v0, v1, v2}, Lcom/mbridge/msdk/mbnative/e/a;-><init>(Lcom/mbridge/msdk/mbnative/c/a;Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;)V

    iput-object v0, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->nativeProvider:Lcom/mbridge/msdk/mbnative/e/a;

    .line 317
    iget-object v0, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->properties:Ljava/util/Map;

    if-eqz v0, :cond_0

    .line 318
    iget-object v0, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->properties:Ljava/util/Map;

    const-string v1, "handler_controller"

    invoke-interface {v0, v1, p0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 320
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->nativeProvider:Lcom/mbridge/msdk/mbnative/e/a;

    iget-object v1, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->context:Landroid/content/Context;

    const/4 v2, 0x0

    iget-object v3, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->properties:Ljava/util/Map;

    invoke-virtual {v0, v1, v2, v3}, Lcom/mbridge/msdk/mbnative/e/a;->a(Landroid/content/Context;Landroid/content/res/Resources;Ljava/util/Map;)V

    .line 322
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->nativeProvider:Lcom/mbridge/msdk/mbnative/e/a;

    invoke-virtual {v0, p1, p2}, Lcom/mbridge/msdk/mbnative/e/a;->b(Landroid/view/View;Lcom/mbridge/msdk/out/Campaign;)V

    return-void
.end method

.method public unregisterView(Landroid/view/View;Ljava/util/List;Lcom/mbridge/msdk/out/Campaign;)V
    .locals 4
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "(",
            "Landroid/view/View;",
            "Ljava/util/List<",
            "Landroid/view/View;",
            ">;",
            "Lcom/mbridge/msdk/out/Campaign;",
            ")V"
        }
    .end annotation

    .line 326
    iget-object v0, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->nativeProvider:Lcom/mbridge/msdk/mbnative/e/a;

    if-nez v0, :cond_1

    .line 327
    new-instance v0, Lcom/mbridge/msdk/mbnative/e/a;

    iget-object v1, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->adListener:Lcom/mbridge/msdk/mbnative/c/a;

    iget-object v2, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->trackingListener:Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;

    invoke-direct {v0, v1, v2}, Lcom/mbridge/msdk/mbnative/e/a;-><init>(Lcom/mbridge/msdk/mbnative/c/a;Lcom/mbridge/msdk/out/NativeListener$NativeTrackingListener;)V

    iput-object v0, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->nativeProvider:Lcom/mbridge/msdk/mbnative/e/a;

    .line 328
    iget-object v0, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->properties:Ljava/util/Map;

    if-eqz v0, :cond_0

    .line 329
    iget-object v0, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->properties:Ljava/util/Map;

    const-string v1, "handler_controller"

    invoke-interface {v0, v1, p0}, Ljava/util/Map;->put(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;

    .line 331
    :cond_0
    iget-object v0, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->nativeProvider:Lcom/mbridge/msdk/mbnative/e/a;

    iget-object v1, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->context:Landroid/content/Context;

    const/4 v2, 0x0

    iget-object v3, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->properties:Ljava/util/Map;

    invoke-virtual {v0, v1, v2, v3}, Lcom/mbridge/msdk/mbnative/e/a;->a(Landroid/content/Context;Landroid/content/res/Resources;Ljava/util/Map;)V

    .line 333
    :cond_1
    iget-object v0, p0, Lcom/mbridge/msdk/out/MBNativeHandler;->nativeProvider:Lcom/mbridge/msdk/mbnative/e/a;

    invoke-virtual {v0, p1, p2, p3}, Lcom/mbridge/msdk/mbnative/e/a;->b(Landroid/view/View;Ljava/util/List;Lcom/mbridge/msdk/out/Campaign;)V

    return-void
.end method
