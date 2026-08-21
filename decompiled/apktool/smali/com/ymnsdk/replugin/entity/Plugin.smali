.class public Lcom/ymnsdk/replugin/entity/Plugin;
.super Ljava/lang/Object;
.source "Plugin.java"


# instance fields
.field private base_url:Ljava/lang/String;

.field common_mode:I

.field private description:Ljava/lang/String;

.field private gray_manifest_path:Ljava/lang/String;

.field private gray_update_type:I

.field private gray_update_type_v22:I

.field private gray_version:Ljava/lang/String;

.field private grayscale_condition:Lcom/ymnsdk/replugin/entity/GrayscaleCondition;

.field private id:Ljava/lang/String;

.field private manifest_path:Ljava/lang/String;

.field notify_after_update_enabled:I

.field notify_before_update_enabled:I

.field notify_launch_failure_enabled:I

.field private silent_update:I

.field silent_update_filter:Lcom/ymnsdk/replugin/entity/silentfilter/SilentUpdateFilterEnity;

.field private silent_update_priority:I

.field private state_path:Ljava/lang/String;

.field private update_type:I

.field private update_type_v22:I

.field private version:Ljava/lang/String;


# direct methods
.method public constructor <init>()V
    .locals 1

    .line 8
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    const/4 v0, 0x1

    .line 21
    iput v0, p0, Lcom/ymnsdk/replugin/entity/Plugin;->silent_update:I

    return-void
.end method


# virtual methods
.method public getBase_url()Ljava/lang/String;
    .locals 1

    .line 52
    iget-object v0, p0, Lcom/ymnsdk/replugin/entity/Plugin;->base_url:Ljava/lang/String;

    return-object v0
.end method

.method public getCommon_mode()I
    .locals 1

    .line 140
    iget v0, p0, Lcom/ymnsdk/replugin/entity/Plugin;->common_mode:I

    return v0
.end method

.method public getDescription()Ljava/lang/String;
    .locals 1

    .line 84
    iget-object v0, p0, Lcom/ymnsdk/replugin/entity/Plugin;->description:Ljava/lang/String;

    return-object v0
.end method

.method public getGray_manifest_path()Ljava/lang/String;
    .locals 1

    .line 116
    iget-object v0, p0, Lcom/ymnsdk/replugin/entity/Plugin;->gray_manifest_path:Ljava/lang/String;

    return-object v0
.end method

.method public getGray_update_type()I
    .locals 1

    .line 132
    iget v0, p0, Lcom/ymnsdk/replugin/entity/Plugin;->gray_update_type:I

    return v0
.end method

.method public getGray_update_type_v22()I
    .locals 1

    .line 188
    iget v0, p0, Lcom/ymnsdk/replugin/entity/Plugin;->gray_update_type_v22:I

    return v0
.end method

.method public getGray_version()Ljava/lang/String;
    .locals 1

    .line 108
    iget-object v0, p0, Lcom/ymnsdk/replugin/entity/Plugin;->gray_version:Ljava/lang/String;

    return-object v0
.end method

.method public getGrayscale_condition()Lcom/ymnsdk/replugin/entity/GrayscaleCondition;
    .locals 1

    .line 124
    iget-object v0, p0, Lcom/ymnsdk/replugin/entity/Plugin;->grayscale_condition:Lcom/ymnsdk/replugin/entity/GrayscaleCondition;

    return-object v0
.end method

.method public getId()Ljava/lang/String;
    .locals 1

    .line 36
    iget-object v0, p0, Lcom/ymnsdk/replugin/entity/Plugin;->id:Ljava/lang/String;

    return-object v0
.end method

.method public getManifest_path()Ljava/lang/String;
    .locals 1

    .line 60
    iget-object v0, p0, Lcom/ymnsdk/replugin/entity/Plugin;->manifest_path:Ljava/lang/String;

    return-object v0
.end method

.method public getNotify_after_update_enabled()I
    .locals 1

    .line 156
    iget v0, p0, Lcom/ymnsdk/replugin/entity/Plugin;->notify_after_update_enabled:I

    return v0
.end method

.method public getNotify_before_update_enabled()I
    .locals 1

    .line 148
    iget v0, p0, Lcom/ymnsdk/replugin/entity/Plugin;->notify_before_update_enabled:I

    return v0
.end method

.method public getNotify_launch_failure_enabled()I
    .locals 1

    .line 164
    iget v0, p0, Lcom/ymnsdk/replugin/entity/Plugin;->notify_launch_failure_enabled:I

    return v0
.end method

.method public getSilent_update()I
    .locals 1

    .line 92
    iget v0, p0, Lcom/ymnsdk/replugin/entity/Plugin;->silent_update:I

    return v0
.end method

.method public getSilent_update_filter()Lcom/ymnsdk/replugin/entity/silentfilter/SilentUpdateFilterEnity;
    .locals 1

    .line 172
    iget-object v0, p0, Lcom/ymnsdk/replugin/entity/Plugin;->silent_update_filter:Lcom/ymnsdk/replugin/entity/silentfilter/SilentUpdateFilterEnity;

    return-object v0
.end method

.method public getSilent_update_priority()I
    .locals 1

    .line 100
    iget v0, p0, Lcom/ymnsdk/replugin/entity/Plugin;->silent_update_priority:I

    return v0
.end method

.method public getState_path()Ljava/lang/String;
    .locals 1

    .line 68
    iget-object v0, p0, Lcom/ymnsdk/replugin/entity/Plugin;->state_path:Ljava/lang/String;

    return-object v0
.end method

.method public getUpdate_type()I
    .locals 1

    .line 76
    iget v0, p0, Lcom/ymnsdk/replugin/entity/Plugin;->update_type:I

    return v0
.end method

.method public getUpdate_type_v22()I
    .locals 1

    .line 180
    iget v0, p0, Lcom/ymnsdk/replugin/entity/Plugin;->update_type_v22:I

    return v0
.end method

.method public getVersion()Ljava/lang/String;
    .locals 1

    .line 44
    iget-object v0, p0, Lcom/ymnsdk/replugin/entity/Plugin;->version:Ljava/lang/String;

    return-object v0
.end method

.method public setBase_url(Ljava/lang/String;)V
    .locals 0

    .line 56
    iput-object p1, p0, Lcom/ymnsdk/replugin/entity/Plugin;->base_url:Ljava/lang/String;

    return-void
.end method

.method public setCommon_mode(I)V
    .locals 0

    .line 144
    iput p1, p0, Lcom/ymnsdk/replugin/entity/Plugin;->common_mode:I

    return-void
.end method

.method public setDescription(Ljava/lang/String;)V
    .locals 0

    .line 88
    iput-object p1, p0, Lcom/ymnsdk/replugin/entity/Plugin;->description:Ljava/lang/String;

    return-void
.end method

.method public setGray_manifest_path(Ljava/lang/String;)V
    .locals 0

    .line 120
    iput-object p1, p0, Lcom/ymnsdk/replugin/entity/Plugin;->gray_manifest_path:Ljava/lang/String;

    return-void
.end method

.method public setGray_update_type(I)V
    .locals 0

    .line 136
    iput p1, p0, Lcom/ymnsdk/replugin/entity/Plugin;->gray_update_type:I

    return-void
.end method

.method public setGray_update_type_v22(I)V
    .locals 0

    .line 192
    iput p1, p0, Lcom/ymnsdk/replugin/entity/Plugin;->gray_update_type_v22:I

    return-void
.end method

.method public setGray_version(Ljava/lang/String;)V
    .locals 0

    .line 112
    iput-object p1, p0, Lcom/ymnsdk/replugin/entity/Plugin;->gray_version:Ljava/lang/String;

    return-void
.end method

.method public setGrayscale_condition(Lcom/ymnsdk/replugin/entity/GrayscaleCondition;)V
    .locals 0

    .line 128
    iput-object p1, p0, Lcom/ymnsdk/replugin/entity/Plugin;->grayscale_condition:Lcom/ymnsdk/replugin/entity/GrayscaleCondition;

    return-void
.end method

.method public setId(Ljava/lang/String;)V
    .locals 0

    .line 40
    iput-object p1, p0, Lcom/ymnsdk/replugin/entity/Plugin;->id:Ljava/lang/String;

    return-void
.end method

.method public setManifest_path(Ljava/lang/String;)V
    .locals 0

    .line 64
    iput-object p1, p0, Lcom/ymnsdk/replugin/entity/Plugin;->manifest_path:Ljava/lang/String;

    return-void
.end method

.method public setNotify_after_update_enabled(I)V
    .locals 0

    .line 160
    iput p1, p0, Lcom/ymnsdk/replugin/entity/Plugin;->notify_after_update_enabled:I

    return-void
.end method

.method public setNotify_before_update_enabled(I)V
    .locals 0

    .line 152
    iput p1, p0, Lcom/ymnsdk/replugin/entity/Plugin;->notify_before_update_enabled:I

    return-void
.end method

.method public setNotify_launch_failure_enabled(I)V
    .locals 0

    .line 168
    iput p1, p0, Lcom/ymnsdk/replugin/entity/Plugin;->notify_launch_failure_enabled:I

    return-void
.end method

.method public setSilent_update(I)V
    .locals 0

    .line 96
    iput p1, p0, Lcom/ymnsdk/replugin/entity/Plugin;->silent_update:I

    return-void
.end method

.method public setSilent_update_filter(Lcom/ymnsdk/replugin/entity/silentfilter/SilentUpdateFilterEnity;)V
    .locals 0

    .line 176
    iput-object p1, p0, Lcom/ymnsdk/replugin/entity/Plugin;->silent_update_filter:Lcom/ymnsdk/replugin/entity/silentfilter/SilentUpdateFilterEnity;

    return-void
.end method

.method public setSilent_update_priority(I)V
    .locals 0

    .line 104
    iput p1, p0, Lcom/ymnsdk/replugin/entity/Plugin;->silent_update_priority:I

    return-void
.end method

.method public setState_path(Ljava/lang/String;)V
    .locals 0

    .line 72
    iput-object p1, p0, Lcom/ymnsdk/replugin/entity/Plugin;->state_path:Ljava/lang/String;

    return-void
.end method

.method public setUpdate_type(I)V
    .locals 0

    .line 80
    iput p1, p0, Lcom/ymnsdk/replugin/entity/Plugin;->update_type:I

    return-void
.end method

.method public setUpdate_type_v22(I)V
    .locals 0

    .line 184
    iput p1, p0, Lcom/ymnsdk/replugin/entity/Plugin;->update_type_v22:I

    return-void
.end method

.method public setVersion(Ljava/lang/String;)V
    .locals 0

    .line 48
    iput-object p1, p0, Lcom/ymnsdk/replugin/entity/Plugin;->version:Ljava/lang/String;

    return-void
.end method
