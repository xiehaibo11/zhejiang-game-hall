.class public final Lcom/mbridge/msdk/c/a$b;
.super Ljava/lang/Object;
.source "Setting.java"


# annotations
.annotation system Ldalvik/annotation/EnclosingClass;
    value = Lcom/mbridge/msdk/c/a;
.end annotation

.annotation system Ldalvik/annotation/InnerClass;
    accessFlags = 0x9
    name = "b"
.end annotation


# instance fields
.field private a:Ljava/lang/String;

.field private b:Ljava/lang/String;

.field private c:Ljava/lang/String;

.field private d:Lorg/json/JSONArray;


# direct methods
.method public constructor <init>()V
    .locals 0

    .line 2209
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method

.method public static a(Lorg/json/JSONObject;)Lcom/mbridge/msdk/c/a$b;
    .locals 5

    if-nez p0, :cond_0

    .line 2218
    new-instance p0, Lorg/json/JSONObject;

    invoke-direct {p0}, Lorg/json/JSONObject;-><init>()V

    .line 2220
    :cond_0
    new-instance v0, Lcom/mbridge/msdk/c/a$b;

    invoke-direct {v0}, Lcom/mbridge/msdk/c/a$b;-><init>()V

    .line 2221
    invoke-static {}, Lcom/mbridge/msdk/foundation/controller/a;->f()Lcom/mbridge/msdk/foundation/controller/a;

    move-result-object v1

    invoke-virtual {v1}, Lcom/mbridge/msdk/foundation/controller/a;->j()Landroid/content/Context;

    move-result-object v1

    const-string v2, "string"

    const-string v3, "mbridge_cm_feedback_dialog_title"

    .line 2222
    invoke-static {v1, v3, v2}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v1, v3}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v3

    const-string v4, "title"

    invoke-virtual {p0, v4, v3}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    iput-object v3, v0, Lcom/mbridge/msdk/c/a$b;->a:Ljava/lang/String;

    const-string v3, "mbridge_cm_feedback_dialog_close_close"

    .line 2223
    invoke-static {v1, v3, v2}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v1, v3}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v3

    const-string v4, "cancel"

    invoke-virtual {p0, v4, v3}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    iput-object v3, v0, Lcom/mbridge/msdk/c/a$b;->b:Ljava/lang/String;

    const-string v3, "mbridge_cm_feedback_dialog_close_submit"

    .line 2224
    invoke-static {v1, v3, v2}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v1, v3}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v3

    const-string v4, "submit"

    invoke-virtual {p0, v4, v3}, Lorg/json/JSONObject;->optString(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v3

    iput-object v3, v0, Lcom/mbridge/msdk/c/a$b;->c:Ljava/lang/String;

    const-string v3, "content"

    .line 2225
    invoke-virtual {p0, v3}, Lorg/json/JSONObject;->optJSONArray(Ljava/lang/String;)Lorg/json/JSONArray;

    move-result-object p0

    iput-object p0, v0, Lcom/mbridge/msdk/c/a$b;->d:Lorg/json/JSONArray;

    if-nez p0, :cond_1

    .line 2227
    new-instance p0, Lorg/json/JSONArray;

    invoke-direct {p0}, Lorg/json/JSONArray;-><init>()V

    iput-object p0, v0, Lcom/mbridge/msdk/c/a$b;->d:Lorg/json/JSONArray;

    const-string v3, "mbridge_cm_feedback_dialog_content_stuck"

    .line 2228
    invoke-static {v1, v3, v2}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v1, v3}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {p0, v3}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;

    .line 2229
    iget-object p0, v0, Lcom/mbridge/msdk/c/a$b;->d:Lorg/json/JSONArray;

    const-string v3, "mbridge_cm_feedback_dialog_content_cnr"

    invoke-static {v1, v3, v2}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v1, v3}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {p0, v3}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;

    .line 2230
    iget-object p0, v0, Lcom/mbridge/msdk/c/a$b;->d:Lorg/json/JSONArray;

    const-string v3, "mbridge_cm_feedback_dialog_content_balck_screen"

    invoke-static {v1, v3, v2}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v3

    invoke-virtual {v1, v3}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v3

    invoke-virtual {p0, v3}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;

    .line 2231
    iget-object p0, v0, Lcom/mbridge/msdk/c/a$b;->d:Lorg/json/JSONArray;

    const-string v3, "mbridge_cm_feedback_dialog_content_other"

    invoke-static {v1, v3, v2}, Lcom/mbridge/msdk/foundation/tools/s;->a(Landroid/content/Context;Ljava/lang/String;Ljava/lang/String;)I

    move-result v2

    invoke-virtual {v1, v2}, Landroid/content/Context;->getString(I)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {p0, v1}, Lorg/json/JSONArray;->put(Ljava/lang/Object;)Lorg/json/JSONArray;

    :cond_1
    return-object v0
.end method


# virtual methods
.method public final a()Ljava/lang/String;
    .locals 1

    .line 2237
    iget-object v0, p0, Lcom/mbridge/msdk/c/a$b;->a:Ljava/lang/String;

    return-object v0
.end method

.method public final b()Ljava/lang/String;
    .locals 1

    .line 2245
    iget-object v0, p0, Lcom/mbridge/msdk/c/a$b;->b:Ljava/lang/String;

    return-object v0
.end method

.method public final c()Ljava/lang/String;
    .locals 1

    .line 2253
    iget-object v0, p0, Lcom/mbridge/msdk/c/a$b;->c:Ljava/lang/String;

    return-object v0
.end method

.method public final d()Lorg/json/JSONArray;
    .locals 1

    .line 2261
    iget-object v0, p0, Lcom/mbridge/msdk/c/a$b;->d:Lorg/json/JSONArray;

    return-object v0
.end method
