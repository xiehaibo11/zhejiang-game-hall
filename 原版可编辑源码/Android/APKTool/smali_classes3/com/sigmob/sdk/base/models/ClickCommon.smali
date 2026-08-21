.class public Lcom/sigmob/sdk/base/models/ClickCommon;
.super Ljava/lang/Object;

# interfaces
.implements Ljava/io/Serializable;


# static fields
.field public static final CLICK_AREA_APPINFO:Ljava/lang/String; = "appinfo"

.field public static final CLICK_AREA_BTN:Ljava/lang/String; = "btn"

.field public static final CLICK_AREA_MATERIAL:Ljava/lang/String; = "material"

.field public static final CLICK_SCENE_APPINFO:Ljava/lang/String; = "appinfo"

.field public static final CLICK_SCENE_PREVIEW:Ljava/lang/String; = "preview"

.field public static final CLICK_SCENE_TEMPLATE:Ljava/lang/String; = "template"


# instance fields
.field public auto_click:I

.field public clickCoordinate:Ljava/lang/String;

.field public clickUIType:Lcom/sigmob/sdk/base/a;

.field public clickUrl:Ljava/lang/String;

.field public click_area:Ljava/lang/String;

.field public click_scene:Ljava/lang/String;

.field public down:Lcom/czhj/sdk/common/utils/TouchLocation;

.field public isDeeplink:Ljava/lang/String;

.field public is_final_click:Z

.field public up:Lcom/czhj/sdk/common/utils/TouchLocation;


# direct methods
.method public constructor <init>()V
    .locals 0

    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    return-void
.end method


# virtual methods
.method public getClickCoordinate()Ljava/lang/String;
    .locals 3

    iget-object v0, p0, Lcom/sigmob/sdk/base/models/ClickCommon;->down:Lcom/czhj/sdk/common/utils/TouchLocation;

    if-eqz v0, :cond_0

    iget-object v1, p0, Lcom/sigmob/sdk/base/models/ClickCommon;->up:Lcom/czhj/sdk/common/utils/TouchLocation;

    if-eqz v1, :cond_0

    const/4 v1, 0x4

    new-array v1, v1, [Ljava/lang/Object;

    const/4 v2, 0x0

    invoke-virtual {v0}, Lcom/czhj/sdk/common/utils/TouchLocation;->getX()I

    move-result v0

    invoke-static {v0}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v0

    aput-object v0, v1, v2

    const/4 v0, 0x1

    iget-object v2, p0, Lcom/sigmob/sdk/base/models/ClickCommon;->down:Lcom/czhj/sdk/common/utils/TouchLocation;

    invoke-virtual {v2}, Lcom/czhj/sdk/common/utils/TouchLocation;->getY()I

    move-result v2

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    aput-object v2, v1, v0

    const/4 v0, 0x2

    iget-object v2, p0, Lcom/sigmob/sdk/base/models/ClickCommon;->up:Lcom/czhj/sdk/common/utils/TouchLocation;

    invoke-virtual {v2}, Lcom/czhj/sdk/common/utils/TouchLocation;->getX()I

    move-result v2

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    aput-object v2, v1, v0

    const/4 v0, 0x3

    iget-object v2, p0, Lcom/sigmob/sdk/base/models/ClickCommon;->up:Lcom/czhj/sdk/common/utils/TouchLocation;

    invoke-virtual {v2}, Lcom/czhj/sdk/common/utils/TouchLocation;->getY()I

    move-result v2

    invoke-static {v2}, Ljava/lang/Integer;->valueOf(I)Ljava/lang/Integer;

    move-result-object v2

    aput-object v2, v1, v0

    const-string v0, "%s,%s,%s,%s"

    invoke-static {v0, v1}, Ljava/lang/String;->format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    iput-object v0, p0, Lcom/sigmob/sdk/base/models/ClickCommon;->clickCoordinate:Ljava/lang/String;

    :cond_0
    iget-object v0, p0, Lcom/sigmob/sdk/base/models/ClickCommon;->clickCoordinate:Ljava/lang/String;

    return-object v0
.end method
