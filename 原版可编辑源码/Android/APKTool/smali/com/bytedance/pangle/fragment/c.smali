.class public final Lcom/bytedance/pangle/fragment/c;
.super Ljava/lang/Object;

# interfaces
.implements Landroid/app/Application$ActivityLifecycleCallbacks;


# instance fields
.field a:Landroid/app/Fragment;


# direct methods
.method public constructor <init>(Landroid/app/Fragment;)V
    .locals 0

    .line 27
    invoke-direct {p0}, Ljava/lang/Object;-><init>()V

    .line 28
    iput-object p1, p0, Lcom/bytedance/pangle/fragment/c;->a:Landroid/app/Fragment;

    return-void
.end method


# virtual methods
.method public final onActivityCreated(Landroid/app/Activity;Landroid/os/Bundle;)V
    .locals 0

    return-void
.end method

.method public final onActivityDestroyed(Landroid/app/Activity;)V
    .locals 0

    return-void
.end method

.method public final onActivityPaused(Landroid/app/Activity;)V
    .locals 0

    return-void
.end method

.method public final onActivityPostSaveInstanceState(Landroid/app/Activity;Landroid/os/Bundle;)V
    .locals 9

    const-string v0, "mActive"

    .line 58
    iget-object v1, p0, Lcom/bytedance/pangle/fragment/c;->a:Landroid/app/Fragment;

    invoke-virtual {v1}, Landroid/app/Fragment;->getActivity()Landroid/app/Activity;

    move-result-object v1

    if-eq v1, p1, :cond_0

    return-void

    :cond_0
    :try_start_0
    const-string p1, "android:fragments"

    .line 63
    invoke-virtual {p2, p1}, Landroid/os/Bundle;->getParcelable(Ljava/lang/String;)Landroid/os/Parcelable;

    move-result-object p1

    if-nez p1, :cond_1

    return-void

    .line 65
    :cond_1
    invoke-static {p1, v0}, Lcom/bytedance/pangle/util/FieldUtils;->readField(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, [Ljava/lang/Object;

    check-cast p2, [Ljava/lang/Object;

    if-nez p2, :cond_2

    return-void

    :cond_2
    const/4 v1, 0x0

    .line 68
    array-length v2, p2

    const/4 v3, 0x0

    move v4, v3

    :goto_0
    if-ge v4, v2, :cond_6

    aget-object v5, p2, v4

    const-string v6, "mTag"

    .line 69
    invoke-static {v5, v6}, Lcom/bytedance/pangle/util/FieldUtils;->readField(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v6

    const-string v7, "androidx.lifecycle.LifecycleDispatcher.report_fragment_tag_plugin"

    .line 71
    invoke-virtual {v7, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v7

    if-eqz v7, :cond_3

    goto :goto_1

    .line 75
    :cond_3
    instance-of v7, v6, Ljava/lang/String;

    if-eqz v7, :cond_5

    .line 76
    move-object v7, v6

    check-cast v7, Ljava/lang/String;

    const-string v8, "androidx.lifecycle.LifecycleDispatcher.report_fragment_tag_pangle"

    invoke-virtual {v7, v8}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v7

    if-nez v7, :cond_4

    check-cast v6, Ljava/lang/String;

    const-string v7, "android.arch.lifecycle.LifecycleDispatcher.report_fragment_tag_pangle"

    invoke-virtual {v6, v7}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v6

    if-eqz v6, :cond_5

    :cond_4
    :goto_1
    move-object v1, v5

    goto :goto_2

    :cond_5
    add-int/lit8 v4, v4, 0x1

    goto :goto_0

    :cond_6
    :goto_2
    if-eqz v1, :cond_9

    const-string v2, "android.app.FragmentState"

    .line 83
    invoke-static {v2}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v2

    array-length v4, p2

    add-int/lit8 v4, v4, -0x1

    invoke-static {v2, v4}, Ljava/lang/reflect/Array;->newInstance(Ljava/lang/Class;I)Ljava/lang/Object;

    move-result-object v2

    .line 84
    check-cast v2, [Ljava/lang/Object;

    check-cast v2, [Ljava/lang/Object;

    .line 85
    array-length v4, p2

    add-int/lit8 v4, v4, -0x1

    new-array v4, v4, [I

    move v5, v3

    .line 87
    :goto_3
    array-length v6, p2

    if-ge v3, v6, :cond_8

    .line 88
    aget-object v6, p2, v3

    if-eq v6, v1, :cond_7

    .line 89
    aget-object v6, p2, v3

    aput-object v6, v2, v5

    .line 90
    aput v3, v4, v5

    add-int/lit8 v5, v5, 0x1

    :cond_7
    add-int/lit8 v3, v3, 0x1

    goto :goto_3

    .line 94
    :cond_8
    invoke-static {p1, v0, v2}, Lcom/bytedance/pangle/util/FieldUtils;->writeField(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/Object;)V

    const-string p2, "mAdded"

    .line 95
    invoke-static {p1, p2, v4}, Lcom/bytedance/pangle/util/FieldUtils;->writeField(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/Object;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_9
    return-void

    :catchall_0
    move-exception p1

    .line 98
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    return-void
.end method

.method public final onActivityResumed(Landroid/app/Activity;)V
    .locals 0

    return-void
.end method

.method public final onActivitySaveInstanceState(Landroid/app/Activity;Landroid/os/Bundle;)V
    .locals 9

    const-string v0, "mActive"

    .line 104
    iget-object v1, p0, Lcom/bytedance/pangle/fragment/c;->a:Landroid/app/Fragment;

    invoke-virtual {v1}, Landroid/app/Fragment;->getActivity()Landroid/app/Activity;

    move-result-object v1

    if-eq v1, p1, :cond_0

    return-void

    :cond_0
    :try_start_0
    const-string p1, "android:fragments"

    .line 109
    invoke-virtual {p2, p1}, Landroid/os/Bundle;->getParcelable(Ljava/lang/String;)Landroid/os/Parcelable;

    move-result-object p1

    if-nez p1, :cond_1

    return-void

    .line 111
    :cond_1
    invoke-static {p1, v0}, Lcom/bytedance/pangle/util/FieldUtils;->readField(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/Object;

    move-result-object p2

    check-cast p2, [Ljava/lang/Object;

    check-cast p2, [Ljava/lang/Object;

    if-nez p2, :cond_2

    return-void

    :cond_2
    const/4 v1, 0x0

    .line 114
    array-length v2, p2

    const/4 v3, 0x0

    move v4, v3

    :goto_0
    if-ge v4, v2, :cond_6

    aget-object v5, p2, v4

    const-string v6, "mTag"

    .line 115
    invoke-static {v5, v6}, Lcom/bytedance/pangle/util/FieldUtils;->readField(Ljava/lang/Object;Ljava/lang/String;)Ljava/lang/Object;

    move-result-object v6

    const-string v7, "androidx.lifecycle.LifecycleDispatcher.report_fragment_tag_plugin"

    .line 117
    invoke-virtual {v7, v6}, Ljava/lang/String;->equals(Ljava/lang/Object;)Z

    move-result v7

    if-eqz v7, :cond_3

    goto :goto_1

    .line 121
    :cond_3
    instance-of v7, v6, Ljava/lang/String;

    if-eqz v7, :cond_5

    .line 122
    move-object v7, v6

    check-cast v7, Ljava/lang/String;

    const-string v8, "androidx.lifecycle.LifecycleDispatcher.report_fragment_tag_pangle"

    invoke-virtual {v7, v8}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v7

    if-nez v7, :cond_4

    check-cast v6, Ljava/lang/String;

    const-string v7, "android.arch.lifecycle.LifecycleDispatcher.report_fragment_tag_pangle"

    invoke-virtual {v6, v7}, Ljava/lang/String;->contains(Ljava/lang/CharSequence;)Z

    move-result v6

    if-eqz v6, :cond_5

    :cond_4
    :goto_1
    move-object v1, v5

    goto :goto_2

    :cond_5
    add-int/lit8 v4, v4, 0x1

    goto :goto_0

    :cond_6
    :goto_2
    if-eqz v1, :cond_9

    const-string v2, "android.app.FragmentState"

    .line 129
    invoke-static {v2}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v2

    array-length v4, p2

    add-int/lit8 v4, v4, -0x1

    invoke-static {v2, v4}, Ljava/lang/reflect/Array;->newInstance(Ljava/lang/Class;I)Ljava/lang/Object;

    move-result-object v2

    .line 130
    check-cast v2, [Ljava/lang/Object;

    check-cast v2, [Ljava/lang/Object;

    .line 131
    array-length v4, p2

    add-int/lit8 v4, v4, -0x1

    new-array v4, v4, [I

    move v5, v3

    .line 133
    :goto_3
    array-length v6, p2

    if-ge v3, v6, :cond_8

    .line 134
    aget-object v6, p2, v3

    if-eq v6, v1, :cond_7

    .line 135
    aget-object v6, p2, v3

    aput-object v6, v2, v5

    .line 136
    aput v3, v4, v5

    add-int/lit8 v5, v5, 0x1

    :cond_7
    add-int/lit8 v3, v3, 0x1

    goto :goto_3

    .line 140
    :cond_8
    invoke-static {p1, v0, v2}, Lcom/bytedance/pangle/util/FieldUtils;->writeField(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/Object;)V

    const-string p2, "mAdded"

    .line 141
    invoke-static {p1, p2, v4}, Lcom/bytedance/pangle/util/FieldUtils;->writeField(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/Object;)V
    :try_end_0
    .catchall {:try_start_0 .. :try_end_0} :catchall_0

    :cond_9
    return-void

    :catchall_0
    move-exception p1

    .line 144
    invoke-virtual {p1}, Ljava/lang/Throwable;->printStackTrace()V

    return-void
.end method

.method public final onActivityStarted(Landroid/app/Activity;)V
    .locals 0

    return-void
.end method

.method public final onActivityStopped(Landroid/app/Activity;)V
    .locals 0

    return-void
.end method
