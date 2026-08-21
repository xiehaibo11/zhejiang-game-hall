.class public Lcom/bianfeng/addpermission/ui/ShowPermissionDialog;
.super Landroid/app/Dialog;
.source "ShowPermissionDialog.java"

# interfaces
.implements Landroid/view/View$OnClickListener;
.implements Landroid/widget/CompoundButton$OnCheckedChangeListener;


# instance fields
.field private adapter:Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter;

.field private appName:Ljava/lang/String;

.field private cancel_btn:Landroid/widget/Button;

.field private checkBox:Landroid/widget/CheckBox;

.field private context:Landroid/app/Activity;

.field private list:Ljava/util/List;
    .annotation system Ldalvik/annotation/Signature;
        value = {
            "Ljava/util/List<",
            "Lcom/bianfeng/addpermission/ui/PermissionBean;",
            ">;"
        }
    .end annotation
.end field

.field private ok_btn:Landroid/widget/Button;

.field private recyclerView:Landroid/support/v7/widget/RecyclerView;

.field private title:Landroid/widget/TextView;


# direct methods
.method public constructor <init>(Landroid/app/Activity;)V
    .locals 1

    const-string v0, "R.style.DialogActivityTheme"

    .line 33
    invoke-static {p1, v0}, Lcom/bianfeng/addpermission/common/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v0

    invoke-direct {p0, p1, v0}, Landroid/app/Dialog;-><init>(Landroid/content/Context;I)V

    .line 34
    iput-object p1, p0, Lcom/bianfeng/addpermission/ui/ShowPermissionDialog;->context:Landroid/app/Activity;

    const-string v0, "R.layout.activity_show_permission"

    .line 35
    invoke-static {p1, v0}, Lcom/bianfeng/addpermission/common/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/bianfeng/addpermission/ui/ShowPermissionDialog;->setContentView(I)V

    return-void
.end method

.method private initAdapter()V
    .locals 3

    .line 93
    iget-object v0, p0, Lcom/bianfeng/addpermission/ui/ShowPermissionDialog;->context:Landroid/app/Activity;

    const-string v1, "R.id.show_permission_list"

    invoke-static {v0, v1}, Lcom/bianfeng/addpermission/common/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v0

    invoke-virtual {p0, v0}, Lcom/bianfeng/addpermission/ui/ShowPermissionDialog;->findViewById(I)Landroid/view/View;

    move-result-object v0

    check-cast v0, Landroid/support/v7/widget/RecyclerView;

    iput-object v0, p0, Lcom/bianfeng/addpermission/ui/ShowPermissionDialog;->recyclerView:Landroid/support/v7/widget/RecyclerView;

    .line 94
    new-instance v0, Landroid/support/v7/widget/LinearLayoutManager;

    iget-object v1, p0, Lcom/bianfeng/addpermission/ui/ShowPermissionDialog;->context:Landroid/app/Activity;

    invoke-direct {v0, v1}, Landroid/support/v7/widget/LinearLayoutManager;-><init>(Landroid/content/Context;)V

    .line 96
    iget-object v1, p0, Lcom/bianfeng/addpermission/ui/ShowPermissionDialog;->recyclerView:Landroid/support/v7/widget/RecyclerView;

    invoke-virtual {v1, v0}, Landroid/support/v7/widget/RecyclerView;->setLayoutManager(Landroid/support/v7/widget/RecyclerView$LayoutManager;)V

    const/4 v1, 0x1

    .line 98
    invoke-virtual {v0, v1}, Landroid/support/v7/widget/LinearLayoutManager;->setOrientation(I)V

    .line 99
    new-instance v0, Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter;

    iget-object v1, p0, Lcom/bianfeng/addpermission/ui/ShowPermissionDialog;->list:Ljava/util/List;

    iget-object v2, p0, Lcom/bianfeng/addpermission/ui/ShowPermissionDialog;->context:Landroid/app/Activity;

    invoke-direct {v0, v1, v2}, Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter;-><init>(Ljava/util/List;Landroid/content/Context;)V

    iput-object v0, p0, Lcom/bianfeng/addpermission/ui/ShowPermissionDialog;->adapter:Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter;

    .line 101
    new-instance v0, Lcom/bianfeng/addpermission/ui/ShowPermissionDecoration;

    iget-object v1, p0, Lcom/bianfeng/addpermission/ui/ShowPermissionDialog;->context:Landroid/app/Activity;

    invoke-direct {v0, v1}, Lcom/bianfeng/addpermission/ui/ShowPermissionDecoration;-><init>(Landroid/content/Context;)V

    .line 102
    iget-object v1, p0, Lcom/bianfeng/addpermission/ui/ShowPermissionDialog;->recyclerView:Landroid/support/v7/widget/RecyclerView;

    invoke-virtual {v1, v0}, Landroid/support/v7/widget/RecyclerView;->addItemDecoration(Landroid/support/v7/widget/RecyclerView$ItemDecoration;)V

    .line 104
    iget-object v0, p0, Lcom/bianfeng/addpermission/ui/ShowPermissionDialog;->recyclerView:Landroid/support/v7/widget/RecyclerView;

    new-instance v1, Landroid/support/v7/widget/DefaultItemAnimator;

    invoke-direct {v1}, Landroid/support/v7/widget/DefaultItemAnimator;-><init>()V

    invoke-virtual {v0, v1}, Landroid/support/v7/widget/RecyclerView;->setItemAnimator(Landroid/support/v7/widget/RecyclerView$ItemAnimator;)V

    .line 105
    iget-object v0, p0, Lcom/bianfeng/addpermission/ui/ShowPermissionDialog;->recyclerView:Landroid/support/v7/widget/RecyclerView;

    iget-object v1, p0, Lcom/bianfeng/addpermission/ui/ShowPermissionDialog;->adapter:Lcom/bianfeng/addpermission/ui/ShowPermissionAdapter;

    invoke-virtual {v0, v1}, Landroid/support/v7/widget/RecyclerView;->setAdapter(Landroid/support/v7/widget/RecyclerView$Adapter;)V

    return-void
.end method

.method private initdata()V
    .locals 1

    const-string v0, "initdata---------------"

    .line 81
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 82
    iget-object v0, p0, Lcom/bianfeng/addpermission/ui/ShowPermissionDialog;->context:Landroid/app/Activity;

    invoke-static {v0}, Lcom/bianfeng/addpermission/common/SharedPreferencesUtils;->getInstance(Landroid/content/Context;)Lcom/bianfeng/addpermission/common/SharedPreferencesUtils;

    move-result-object v0

    invoke-virtual {v0}, Lcom/bianfeng/addpermission/common/SharedPreferencesUtils;->getPermissions()Ljava/util/List;

    move-result-object v0

    iput-object v0, p0, Lcom/bianfeng/addpermission/ui/ShowPermissionDialog;->list:Ljava/util/List;

    if-eqz v0, :cond_1

    .line 83
    invoke-interface {v0}, Ljava/util/List;->isEmpty()Z

    move-result v0

    if-eqz v0, :cond_0

    goto :goto_0

    .line 88
    :cond_0
    invoke-direct {p0}, Lcom/bianfeng/addpermission/ui/ShowPermissionDialog;->initAdapter()V

    goto :goto_1

    .line 84
    :cond_1
    :goto_0
    invoke-virtual {p0}, Lcom/bianfeng/addpermission/ui/ShowPermissionDialog;->dismiss()V

    const-string v0, "initdata--------onRefuse-------"

    .line 85
    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 86
    invoke-static {}, Lcom/bianfeng/addpermission/ui/AddPermissionApi;->getPermissionCallback()Lcom/bianfeng/addpermission/ui/PermissionCallback;

    move-result-object v0

    invoke-interface {v0}, Lcom/bianfeng/addpermission/ui/PermissionCallback;->onRefuse()V

    :goto_1
    return-void
.end method

.method public static start(Landroid/app/Activity;)V
    .locals 1

    .line 39
    new-instance v0, Lcom/bianfeng/addpermission/ui/ShowPermissionDialog;

    invoke-direct {v0, p0}, Lcom/bianfeng/addpermission/ui/ShowPermissionDialog;-><init>(Landroid/app/Activity;)V

    .line 40
    invoke-virtual {v0}, Lcom/bianfeng/addpermission/ui/ShowPermissionDialog;->show()V

    return-void
.end method


# virtual methods
.method public onCheckedChanged(Landroid/widget/CompoundButton;Z)V
    .locals 2

    .line 126
    invoke-virtual {p1}, Landroid/widget/CompoundButton;->getId()I

    move-result p1

    .line 127
    iget-object v0, p0, Lcom/bianfeng/addpermission/ui/ShowPermissionDialog;->context:Landroid/app/Activity;

    const-string v1, "R.id.show_permission_check_box"

    invoke-static {v0, v1}, Lcom/bianfeng/addpermission/common/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v0

    if-ne p1, v0, :cond_0

    .line 128
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "onCheckedChanged"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1, p2}, Ljava/lang/StringBuilder;->append(Z)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 129
    iget-object p1, p0, Lcom/bianfeng/addpermission/ui/ShowPermissionDialog;->context:Landroid/app/Activity;

    invoke-static {p1}, Lcom/bianfeng/addpermission/common/SharedPreferencesUtils;->getInstance(Landroid/content/Context;)Lcom/bianfeng/addpermission/common/SharedPreferencesUtils;

    move-result-object p1

    invoke-virtual {p1, p2}, Lcom/bianfeng/addpermission/common/SharedPreferencesUtils;->setRefuse(Z)V

    :cond_0
    return-void
.end method

.method public onClick(Landroid/view/View;)V
    .locals 2

    .line 110
    invoke-virtual {p1}, Landroid/view/View;->getId()I

    move-result p1

    .line 111
    iget-object v0, p0, Lcom/bianfeng/addpermission/ui/ShowPermissionDialog;->context:Landroid/app/Activity;

    const-string v1, "R.id.show_permission_ok"

    invoke-static {v0, v1}, Lcom/bianfeng/addpermission/common/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v0

    if-ne p1, v0, :cond_0

    .line 112
    iget-object p1, p0, Lcom/bianfeng/addpermission/ui/ShowPermissionDialog;->context:Landroid/app/Activity;

    invoke-static {p1}, Lcom/bianfeng/addpermission/common/SharedPreferencesUtils;->getInstance(Landroid/content/Context;)Lcom/bianfeng/addpermission/common/SharedPreferencesUtils;

    move-result-object p1

    iget-object v0, p0, Lcom/bianfeng/addpermission/ui/ShowPermissionDialog;->list:Ljava/util/List;

    invoke-virtual {p1, v0}, Lcom/bianfeng/addpermission/common/SharedPreferencesUtils;->putString(Ljava/util/List;)V

    .line 113
    invoke-virtual {p0}, Lcom/bianfeng/addpermission/ui/ShowPermissionDialog;->dismiss()V

    .line 114
    invoke-static {}, Lcom/bianfeng/addpermission/ui/AddPermissionApi;->getPermissionCallback()Lcom/bianfeng/addpermission/ui/PermissionCallback;

    move-result-object p1

    invoke-interface {p1}, Lcom/bianfeng/addpermission/ui/PermissionCallback;->onAgree()V

    goto :goto_0

    .line 116
    :cond_0
    iget-object v0, p0, Lcom/bianfeng/addpermission/ui/ShowPermissionDialog;->context:Landroid/app/Activity;

    const-string v1, "R.id.show_permission_cancel"

    invoke-static {v0, v1}, Lcom/bianfeng/addpermission/common/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v0

    if-ne p1, v0, :cond_1

    .line 118
    new-instance p1, Ljava/lang/StringBuilder;

    invoke-direct {p1}, Ljava/lang/StringBuilder;-><init>()V

    const-string v0, "\u70b9\u51fb\u4e86\u4e0d\u4fdd\u5b58\u6309\u94ae"

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    iget-object v0, p0, Lcom/bianfeng/addpermission/ui/ShowPermissionDialog;->list:Ljava/util/List;

    invoke-static {v0}, Lcom/bianfeng/ymnsdk/util/thridsdk/YmnGsonUtil;->toJson(Ljava/lang/Object;)Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {p1}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object p1

    invoke-static {p1}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 119
    invoke-virtual {p0}, Lcom/bianfeng/addpermission/ui/ShowPermissionDialog;->dismiss()V

    .line 120
    invoke-static {}, Lcom/bianfeng/addpermission/ui/AddPermissionApi;->getPermissionCallback()Lcom/bianfeng/addpermission/ui/PermissionCallback;

    move-result-object p1

    invoke-interface {p1}, Lcom/bianfeng/addpermission/ui/PermissionCallback;->onRefuse()V

    :cond_1
    :goto_0
    return-void
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 6

    .line 54
    invoke-super {p0, p1}, Landroid/app/Dialog;->onCreate(Landroid/os/Bundle;)V

    .line 55
    invoke-virtual {p0}, Lcom/bianfeng/addpermission/ui/ShowPermissionDialog;->getWindow()Landroid/view/Window;

    move-result-object p1

    .line 56
    invoke-virtual {p1}, Landroid/view/Window;->getAttributes()Landroid/view/WindowManager$LayoutParams;

    move-result-object v0

    .line 57
    iget-object v1, p0, Lcom/bianfeng/addpermission/ui/ShowPermissionDialog;->context:Landroid/app/Activity;

    invoke-virtual {v1}, Landroid/app/Activity;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v1

    const/4 v2, 0x0

    .line 58
    invoke-virtual {p0, v2}, Lcom/bianfeng/addpermission/ui/ShowPermissionDialog;->setCancelable(Z)V

    .line 60
    iget-object v2, p0, Lcom/bianfeng/addpermission/ui/ShowPermissionDialog;->context:Landroid/app/Activity;

    invoke-static {v2}, Lcom/bianfeng/addpermission/common/DensityUtils;->isPortrait(Landroid/app/Activity;)Z

    move-result v2

    if-eqz v2, :cond_0

    .line 61
    iget v2, v1, Landroid/util/DisplayMetrics;->heightPixels:I

    int-to-double v2, v2

    const-wide v4, 0x3fe199999999999aL    # 0.55

    mul-double v2, v2, v4

    double-to-int v2, v2

    iput v2, v0, Landroid/view/WindowManager$LayoutParams;->height:I

    .line 62
    iget v1, v1, Landroid/util/DisplayMetrics;->widthPixels:I

    int-to-double v1, v1

    const-wide v3, 0x3feb333333333333L    # 0.85

    mul-double v1, v1, v3

    double-to-int v1, v1

    iput v1, v0, Landroid/view/WindowManager$LayoutParams;->width:I

    goto :goto_0

    .line 64
    :cond_0
    iget v2, v1, Landroid/util/DisplayMetrics;->heightPixels:I

    int-to-double v2, v2

    const-wide v4, 0x3fe999999999999aL    # 0.8

    mul-double v2, v2, v4

    double-to-int v2, v2

    iput v2, v0, Landroid/view/WindowManager$LayoutParams;->height:I

    .line 65
    iget v1, v1, Landroid/util/DisplayMetrics;->widthPixels:I

    int-to-double v1, v1

    const-wide v3, 0x3fe3333333333333L    # 0.6

    mul-double v1, v1, v3

    double-to-int v1, v1

    iput v1, v0, Landroid/view/WindowManager$LayoutParams;->width:I

    .line 67
    :goto_0
    invoke-virtual {p1, v0}, Landroid/view/Window;->setAttributes(Landroid/view/WindowManager$LayoutParams;)V

    .line 68
    iget-object p1, p0, Lcom/bianfeng/addpermission/ui/ShowPermissionDialog;->context:Landroid/app/Activity;

    const-string v0, "R.id.show_permission_ok"

    invoke-static {p1, v0}, Lcom/bianfeng/addpermission/common/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/bianfeng/addpermission/ui/ShowPermissionDialog;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/Button;

    iput-object p1, p0, Lcom/bianfeng/addpermission/ui/ShowPermissionDialog;->ok_btn:Landroid/widget/Button;

    .line 69
    iget-object p1, p0, Lcom/bianfeng/addpermission/ui/ShowPermissionDialog;->context:Landroid/app/Activity;

    const-string v0, "R.id.show_permission_cancel"

    invoke-static {p1, v0}, Lcom/bianfeng/addpermission/common/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/bianfeng/addpermission/ui/ShowPermissionDialog;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/Button;

    iput-object p1, p0, Lcom/bianfeng/addpermission/ui/ShowPermissionDialog;->cancel_btn:Landroid/widget/Button;

    .line 70
    iget-object p1, p0, Lcom/bianfeng/addpermission/ui/ShowPermissionDialog;->context:Landroid/app/Activity;

    const-string v0, "R.id.show_permission_title"

    invoke-static {p1, v0}, Lcom/bianfeng/addpermission/common/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/bianfeng/addpermission/ui/ShowPermissionDialog;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/TextView;

    iput-object p1, p0, Lcom/bianfeng/addpermission/ui/ShowPermissionDialog;->title:Landroid/widget/TextView;

    .line 71
    iget-object p1, p0, Lcom/bianfeng/addpermission/ui/ShowPermissionDialog;->ok_btn:Landroid/widget/Button;

    invoke-virtual {p1, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 72
    iget-object p1, p0, Lcom/bianfeng/addpermission/ui/ShowPermissionDialog;->cancel_btn:Landroid/widget/Button;

    invoke-virtual {p1, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 73
    iget-object p1, p0, Lcom/bianfeng/addpermission/ui/ShowPermissionDialog;->context:Landroid/app/Activity;

    const-string v0, "R.id.show_permission_check_box"

    invoke-static {p1, v0}, Lcom/bianfeng/addpermission/common/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/bianfeng/addpermission/ui/ShowPermissionDialog;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/CheckBox;

    iput-object p1, p0, Lcom/bianfeng/addpermission/ui/ShowPermissionDialog;->checkBox:Landroid/widget/CheckBox;

    .line 74
    invoke-virtual {p1, p0}, Landroid/widget/CheckBox;->setOnCheckedChangeListener(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V

    .line 75
    invoke-direct {p0}, Lcom/bianfeng/addpermission/ui/ShowPermissionDialog;->initdata()V

    .line 76
    iget-object p1, p0, Lcom/bianfeng/addpermission/ui/ShowPermissionDialog;->context:Landroid/app/Activity;

    invoke-static {p1}, Lcom/bianfeng/addpermission/common/AddPermissionToolUtils;->getAppName(Landroid/content/Context;)Ljava/lang/String;

    move-result-object p1

    iput-object p1, p0, Lcom/bianfeng/addpermission/ui/ShowPermissionDialog;->appName:Ljava/lang/String;

    .line 77
    iget-object p1, p0, Lcom/bianfeng/addpermission/ui/ShowPermissionDialog;->title:Landroid/widget/TextView;

    new-instance v0, Ljava/lang/StringBuilder;

    invoke-direct {v0}, Ljava/lang/StringBuilder;-><init>()V

    iget-object v1, p0, Lcom/bianfeng/addpermission/ui/ShowPermissionDialog;->appName:Ljava/lang/String;

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    const-string v1, "\u6743\u9650\u7533\u8bf7"

    invoke-virtual {v0, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v0}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v0

    invoke-virtual {p1, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    return-void
.end method
