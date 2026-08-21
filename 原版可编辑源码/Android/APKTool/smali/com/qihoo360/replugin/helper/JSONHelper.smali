.class public Lcom/qihoo360/replugin/helper/JSONHelper;
.super Ljava/lang/Object;
.source "JSONHelper.java"


# static fields
.field private static final LOG:Z


# direct methods
.method static constructor <clinit>()V
    .locals 1

    .line 38
    sget-boolean v0, Lcom/qihoo360/replugin/RePluginInternal;->FOR_DEV:Z

    sput-boolean v0, Lcom/qihoo360/replugin/helper/JSONHelper;->LOG:Z

    return-void
.end method

.method public constructor <init>()V
    .locals 0

    .line 36
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static cloneNoThrows(Lorg/json/JSONObject;)Lorg/json/JSONObject;
    .locals 1

    .line 66
    :try_start_0
    new-instance v0, Lorg/json/JSONObject;

    invoke-virtual {p0}, Lorg/json/JSONObject;->toString()Ljava/lang/String;

    move-result-object p0

    invoke-direct {v0, p0}, Lorg/json/JSONObject;-><init>(Ljava/lang/String;)V
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    return-object v0

    :catch_0
    move-exception p0

    .line 69
    sget-boolean v0, Lcom/qihoo360/replugin/helper/JSONHelper;->LOG:Z

    if-eqz v0, :cond_0

    .line 70
    invoke-virtual {p0}, Lorg/json/JSONException;->printStackTrace()V

    :cond_0
    const/4 p0, 0x0

    return-object p0
.end method

.method public static putNoThrows(Lorg/json/JSONObject;Ljava/lang/String;Ljava/lang/Object;)V
    .locals 0
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "<T:",
            "Ljava/lang/Object;",
            ">(",
            "Lorg/json/JSONObject;",
            "Ljava/lang/String;",
            "TT;)V"
        }
    .end annotation

    .line 49
    :try_start_0
    invoke-virtual {p0, p1, p2}, Lorg/json/JSONObject;->put(Ljava/lang/String;Ljava/lang/Object;)Lorg/json/JSONObject;
    :try_end_0
    .catch Lorg/json/JSONException; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 51
    sget-boolean p1, Lcom/qihoo360/replugin/helper/JSONHelper;->LOG:Z

    if-eqz p1, :cond_0

    .line 52
    invoke-virtual {p0}, Lorg/json/JSONException;->printStackTrace()V

    :cond_0
    :goto_0
    return-void
.end method

.method public static remove(Lorg/json/JSONArray;I)V
    .locals 2

    .line 80
    sget v0, Landroid/os/Build$VERSION;->SDK_INT:I

    const/16 v1, 0x13

    if-lt v0, v1, :cond_0

    .line 81
    invoke-virtual {p0, p1}, Lorg/json/JSONArray;->remove(I)Ljava/lang/Object;

    goto :goto_0

    .line 83
    :cond_0
    invoke-static {p0, p1}, Lcom/qihoo360/replugin/helper/JSONHelper;->removeBelowAPI19(Lorg/json/JSONArray;I)V

    :goto_0
    return-void
.end method

.method private static removeBelowAPI19(Lorg/json/JSONArray;I)V
    .locals 2

    if-gez p1, :cond_0

    return-void

    .line 92
    :cond_0
    :try_start_0
    const-class v0, Lorg/json/JSONArray;

    const-string v1, "values"

    invoke-virtual {v0, v1}, Ljava/lang/Class;->getDeclaredField(Ljava/lang/String;)Ljava/lang/reflect/Field;

    move-result-object v0

    const/4 v1, 0x1

    .line 93
    invoke-virtual {v0, v1}, Ljava/lang/reflect/Field;->setAccessible(Z)V

    .line 95
    invoke-virtual {v0, p0}, Ljava/lang/reflect/Field;->get(Ljava/lang/Object;)Ljava/lang/Object;

    move-result-object p0

    check-cast p0, Ljava/util/List;

    .line 96
    invoke-interface {p0}, Ljava/util/List;->size()I

    move-result v0

    if-lt p1, v0, :cond_1

    return-void

    .line 99
    :cond_1
    invoke-interface {p0, p1}, Ljava/util/List;->remove(I)Ljava/lang/Object;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception p0

    .line 102
    invoke-virtual {p0}, Ljava/lang/Exception;->printStackTrace()V

    :goto_0
    return-void
.end method
