.class public Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;
.super Landroid/app/Dialog;
.source "ShowPrivacyPolicyDialog.java"

# interfaces
.implements Landroid/view/View$OnClickListener;


# instance fields
.field private final CLICK_TIME:I

.field private cancel_btn:Landroid/widget/Button;

.field private check_policy_tv:Landroid/widget/TextView;

.field private content_tv:Landroid/widget/TextView;

.field private context:Landroid/app/Activity;

.field private lastClickTime:J

.field private ok_btn:Landroid/widget/Button;

.field private show_policy_bg_rl:Landroid/widget/RelativeLayout;

.field private title_tv:Landroid/widget/TextView;


# direct methods
.method public constructor <init>(Landroid/app/Activity;)V
    .locals 2

    const-string v0, "R.style.DialogActivityTheme"

    .line 49
    invoke-static {p1, v0}, Lcom/bianfeng/addpermission/common/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v0

    invoke-direct {p0, p1, v0}, Landroid/app/Dialog;-><init>(Landroid/content/Context;I)V

    const-wide/16 v0, 0x0

    .line 65
    iput-wide v0, p0, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;->lastClickTime:J

    const/16 v0, 0x1f4

    .line 66
    iput v0, p0, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;->CLICK_TIME:I

    .line 50
    iput-object p1, p0, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;->context:Landroid/app/Activity;

    const-string v0, "R.layout.dialog_show_privacypolicy_v2"

    .line 51
    invoke-static {p1, v0}, Lcom/bianfeng/addpermission/common/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;->setContentView(I)V

    return-void
.end method

.method static synthetic access$000(Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;)J
    .locals 2

    .line 43
    iget-wide v0, p0, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;->lastClickTime:J

    return-wide v0
.end method

.method static synthetic access$002(Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;J)J
    .locals 0

    .line 43
    iput-wide p1, p0, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;->lastClickTime:J

    return-wide p1
.end method

.method static synthetic access$100(Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;)Landroid/app/Activity;
    .locals 0

    .line 43
    iget-object p0, p0, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;->context:Landroid/app/Activity;

    return-object p0
.end method

.method static synthetic access$200(Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;)V
    .locals 0

    .line 43
    invoke-direct {p0}, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;->initcheckPolicy()V

    return-void
.end method

.method private initTheme()V
    .locals 2

    .line 196
    iget-object v0, p0, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;->context:Landroid/app/Activity;

    const-string v1, "ANDPERMISSION_TITLE_TEXT_COLOR"

    invoke-static {v0, v1}, Lcom/bianfeng/addpermission/common/AddPermissionToolUtils;->getParamsInfo(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 197
    invoke-virtual {v0}, Ljava/lang/String;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_0

    .line 198
    iget-object v1, p0, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;->title_tv:Landroid/widget/TextView;

    invoke-static {v0}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {v1, v0}, Landroid/widget/TextView;->setTextColor(I)V

    .line 200
    :cond_0
    iget-object v0, p0, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;->context:Landroid/app/Activity;

    const-string v1, "ANDPERMISSION_TITLE_BACKGROUND_COLOR"

    invoke-static {v0, v1}, Lcom/bianfeng/addpermission/common/AddPermissionToolUtils;->getParamsInfo(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_1

    .line 201
    invoke-virtual {v0}, Ljava/lang/String;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_1

    .line 202
    iget-object v1, p0, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;->title_tv:Landroid/widget/TextView;

    invoke-static {v0}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {v1, v0}, Landroid/widget/TextView;->setBackgroundColor(I)V

    .line 205
    :cond_1
    iget-object v0, p0, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;->context:Landroid/app/Activity;

    const-string v1, "ANDPERMISSION_CONTENT_TEXT_COLOR"

    invoke-static {v0, v1}, Lcom/bianfeng/addpermission/common/AddPermissionToolUtils;->getParamsInfo(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_2

    .line 206
    invoke-virtual {v0}, Ljava/lang/String;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_2

    .line 207
    iget-object v1, p0, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;->content_tv:Landroid/widget/TextView;

    invoke-static {v0}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {v1, v0}, Landroid/widget/TextView;->setTextColor(I)V

    .line 209
    :cond_2
    iget-object v0, p0, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;->context:Landroid/app/Activity;

    const-string v1, "ANDPERMISSION_CONTENT_BACKGROUND_COLOR"

    invoke-static {v0, v1}, Lcom/bianfeng/addpermission/common/AddPermissionToolUtils;->getParamsInfo(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_3

    .line 210
    invoke-virtual {v0}, Ljava/lang/String;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_3

    .line 211
    iget-object v1, p0, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;->content_tv:Landroid/widget/TextView;

    invoke-static {v0}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {v1, v0}, Landroid/widget/TextView;->setBackgroundColor(I)V

    .line 214
    :cond_3
    iget-object v0, p0, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;->context:Landroid/app/Activity;

    const-string v1, "ANDPERMISSION_REFUSE_TEXT_COLOR"

    invoke-static {v0, v1}, Lcom/bianfeng/addpermission/common/AddPermissionToolUtils;->getParamsInfo(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_4

    .line 215
    invoke-virtual {v0}, Ljava/lang/String;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_4

    .line 216
    iget-object v1, p0, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;->cancel_btn:Landroid/widget/Button;

    invoke-static {v0}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {v1, v0}, Landroid/widget/Button;->setTextColor(I)V

    .line 218
    :cond_4
    iget-object v0, p0, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;->context:Landroid/app/Activity;

    const-string v1, "ANDPERMISSION_REFUSE_BACKGROUND_COLOR"

    invoke-static {v0, v1}, Lcom/bianfeng/addpermission/common/AddPermissionToolUtils;->getParamsInfo(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_5

    .line 219
    invoke-virtual {v0}, Ljava/lang/String;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_5

    .line 220
    iget-object v1, p0, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;->cancel_btn:Landroid/widget/Button;

    invoke-virtual {v1}, Landroid/widget/Button;->getBackground()Landroid/graphics/drawable/Drawable;

    move-result-object v1

    check-cast v1, Landroid/graphics/drawable/GradientDrawable;

    .line 221
    invoke-static {v0}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {v1, v0}, Landroid/graphics/drawable/GradientDrawable;->setColor(I)V

    .line 222
    iget-object v0, p0, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;->cancel_btn:Landroid/widget/Button;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setBackground(Landroid/graphics/drawable/Drawable;)V

    .line 225
    :cond_5
    iget-object v0, p0, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;->context:Landroid/app/Activity;

    const-string v1, "ANDPERMISSION_AGREE_TEXT_COLOR"

    invoke-static {v0, v1}, Lcom/bianfeng/addpermission/common/AddPermissionToolUtils;->getParamsInfo(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_6

    .line 226
    invoke-virtual {v0}, Ljava/lang/String;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_6

    .line 227
    iget-object v1, p0, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;->ok_btn:Landroid/widget/Button;

    invoke-static {v0}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {v1, v0}, Landroid/widget/Button;->setTextColor(I)V

    .line 229
    :cond_6
    iget-object v0, p0, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;->context:Landroid/app/Activity;

    const-string v1, "ANDPERMISSION_AGREE_BACKGROUND_COLOR"

    invoke-static {v0, v1}, Lcom/bianfeng/addpermission/common/AddPermissionToolUtils;->getParamsInfo(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_7

    .line 230
    invoke-virtual {v0}, Ljava/lang/String;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_7

    .line 231
    iget-object v1, p0, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;->ok_btn:Landroid/widget/Button;

    invoke-virtual {v1}, Landroid/widget/Button;->getBackground()Landroid/graphics/drawable/Drawable;

    move-result-object v1

    check-cast v1, Landroid/graphics/drawable/GradientDrawable;

    .line 232
    invoke-static {v0}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result v0

    invoke-virtual {v1, v0}, Landroid/graphics/drawable/GradientDrawable;->setColor(I)V

    .line 233
    iget-object v0, p0, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;->ok_btn:Landroid/widget/Button;

    invoke-virtual {v0, v1}, Landroid/widget/Button;->setBackground(Landroid/graphics/drawable/Drawable;)V

    :cond_7
    return-void
.end method

.method private initcheckPolicy()V
    .locals 10

    .line 120
    new-instance v0, Landroid/text/SpannableStringBuilder;

    invoke-direct {v0}, Landroid/text/SpannableStringBuilder;-><init>()V

    const-string v1, "\u60a8\u53ef\u901a\u8fc7\u9605\u8bfb\u5b8c\u6574\u7684\u300a\u670d\u52a1\u534f\u8bae\u300b\u548c\u300a\u9690\u79c1\u653f\u7b56\u300b\u6765\u4e86\u89e3\u8be6\u7ec6\u4fe1\u606f"

    .line 121
    invoke-virtual {v0, v1}, Landroid/text/SpannableStringBuilder;->append(Ljava/lang/CharSequence;)Landroid/text/SpannableStringBuilder;

    .line 123
    new-instance v1, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog$1;

    invoke-direct {v1, p0}, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog$1;-><init>(Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;)V

    const/16 v2, 0xf

    const/16 v3, 0x9

    const/16 v4, 0x21

    .line 145
    invoke-virtual {v0, v1, v3, v2, v4}, Landroid/text/SpannableStringBuilder;->setSpan(Ljava/lang/Object;III)V

    .line 147
    new-instance v1, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog$2;

    invoke-direct {v1, p0}, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog$2;-><init>(Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;)V

    const/16 v5, 0x16

    const/16 v6, 0x10

    .line 163
    invoke-virtual {v0, v1, v6, v5, v4}, Landroid/text/SpannableStringBuilder;->setSpan(Ljava/lang/Object;III)V

    .line 164
    iget-object v1, p0, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;->context:Landroid/app/Activity;

    const-string v7, "ANDPERMISSION_POLICY_NAME_TEXT_COLOR"

    invoke-static {v1, v7}, Lcom/bianfeng/addpermission/common/AddPermissionToolUtils;->getMetaData(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v1

    if-eqz v1, :cond_0

    .line 165
    invoke-virtual {v1}, Ljava/lang/String;->isEmpty()Z

    move-result v7

    if-nez v7, :cond_0

    const/4 v7, 0x1

    .line 166
    invoke-virtual {v1, v7}, Ljava/lang/String;->substring(I)Ljava/lang/String;

    move-result-object v1

    goto :goto_0

    :cond_0
    const-string v1, "fd6f4e"

    .line 171
    :goto_0
    new-instance v7, Landroid/text/style/ForegroundColorSpan;

    new-instance v8, Ljava/lang/StringBuilder;

    invoke-direct {v8}, Ljava/lang/StringBuilder;-><init>()V

    const-string v9, "#"

    invoke-virtual {v8, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v8}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v8

    invoke-static {v8}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result v8

    invoke-direct {v7, v8}, Landroid/text/style/ForegroundColorSpan;-><init>(I)V

    .line 172
    invoke-virtual {v0, v7, v6, v5, v4}, Landroid/text/SpannableStringBuilder;->setSpan(Ljava/lang/Object;III)V

    .line 173
    new-instance v5, Landroid/text/style/ForegroundColorSpan;

    new-instance v6, Ljava/lang/StringBuilder;

    invoke-direct {v6}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v6, v9}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6, v1}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v6}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v1

    invoke-static {v1}, Landroid/graphics/Color;->parseColor(Ljava/lang/String;)I

    move-result v1

    invoke-direct {v5, v1}, Landroid/text/style/ForegroundColorSpan;-><init>(I)V

    .line 174
    invoke-virtual {v0, v5, v3, v2, v4}, Landroid/text/SpannableStringBuilder;->setSpan(Ljava/lang/Object;III)V

    .line 175
    iget-object v1, p0, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;->check_policy_tv:Landroid/widget/TextView;

    invoke-static {}, Landroid/text/method/LinkMovementMethod;->getInstance()Landroid/text/method/MovementMethod;

    move-result-object v2

    invoke-virtual {v1, v2}, Landroid/widget/TextView;->setMovementMethod(Landroid/text/method/MovementMethod;)V

    .line 176
    iget-object v1, p0, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;->check_policy_tv:Landroid/widget/TextView;

    invoke-virtual {v1, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    return-void
.end method

.method private initdata()V
    .locals 2

    .line 179
    iget-object v0, p0, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;->content_tv:Landroid/widget/TextView;

    iget-object v1, p0, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;->context:Landroid/app/Activity;

    invoke-static {v1}, Lcom/bianfeng/addpermission/common/PolicyConstantsUtils;->getContentTv(Landroid/content/Context;)Ljava/lang/String;

    move-result-object v1

    invoke-virtual {v0, v1}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 180
    iget-object v0, p0, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;->show_policy_bg_rl:Landroid/widget/RelativeLayout;

    new-instance v1, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog$3;

    invoke-direct {v1, p0}, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog$3;-><init>(Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;)V

    invoke-virtual {v0, v1}, Landroid/widget/RelativeLayout;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 186
    iget-object v0, p0, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;->context:Landroid/app/Activity;

    const-string v1, "ANDPERMISSION_POLICY_TITLE_TEXT"

    invoke-static {v0, v1}, Lcom/bianfeng/addpermission/common/AddPermissionToolUtils;->getParamsInfo(Landroid/content/Context;Ljava/lang/String;)Ljava/lang/String;

    move-result-object v0

    if-eqz v0, :cond_0

    .line 187
    invoke-virtual {v0}, Ljava/lang/String;->isEmpty()Z

    move-result v1

    if-nez v1, :cond_0

    .line 188
    iget-object v1, p0, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;->title_tv:Landroid/widget/TextView;

    invoke-virtual {v1, v0}, Landroid/widget/TextView;->setText(Ljava/lang/CharSequence;)V

    .line 190
    :cond_0
    invoke-direct {p0}, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;->initcheckPolicy()V

    return-void
.end method

.method public static openBrowser(Landroid/content/Context;Ljava/lang/String;)V
    .locals 2

    .line 263
    new-instance v0, Landroid/content/Intent;

    invoke-direct {v0}, Landroid/content/Intent;-><init>()V

    const-string v1, "android.intent.action.VIEW"

    .line 264
    invoke-virtual {v0, v1}, Landroid/content/Intent;->setAction(Ljava/lang/String;)Landroid/content/Intent;

    .line 265
    invoke-static {p1}, Landroid/net/Uri;->parse(Ljava/lang/String;)Landroid/net/Uri;

    move-result-object p1

    invoke-virtual {v0, p1}, Landroid/content/Intent;->setData(Landroid/net/Uri;)Landroid/content/Intent;

    .line 268
    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object p1

    invoke-virtual {v0, p1}, Landroid/content/Intent;->resolveActivity(Landroid/content/pm/PackageManager;)Landroid/content/ComponentName;

    move-result-object p1

    if-eqz p1, :cond_0

    .line 269
    invoke-virtual {p0}, Landroid/content/Context;->getPackageManager()Landroid/content/pm/PackageManager;

    move-result-object p1

    invoke-virtual {v0, p1}, Landroid/content/Intent;->resolveActivity(Landroid/content/pm/PackageManager;)Landroid/content/ComponentName;

    const-string p1, "\u8bf7\u9009\u62e9\u6d4f\u89c8\u5668"

    .line 270
    invoke-static {v0, p1}, Landroid/content/Intent;->createChooser(Landroid/content/Intent;Ljava/lang/CharSequence;)Landroid/content/Intent;

    move-result-object p1

    invoke-virtual {p0, p1}, Landroid/content/Context;->startActivity(Landroid/content/Intent;)V

    goto :goto_0

    :cond_0
    const/4 p1, 0x1

    const-string v0, "Toast.makeText(context,\u94fe\u63a5\u9519\u8bef\u6216\u65e0\u6d4f\u89c8\u5668)"

    .line 272
    invoke-static {p0, v0, p1}, Landroid/widget/Toast;->makeText(Landroid/content/Context;Ljava/lang/CharSequence;I)Landroid/widget/Toast;

    :goto_0
    return-void
.end method

.method public static start(Landroid/app/Activity;)V
    .locals 1

    .line 55
    new-instance v0, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;

    invoke-direct {v0, p0}, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;-><init>(Landroid/app/Activity;)V

    .line 56
    invoke-virtual {v0}, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;->show()V

    return-void
.end method


# virtual methods
.method public onClick(Landroid/view/View;)V
    .locals 5

    .line 240
    invoke-virtual {p1}, Landroid/view/View;->getId()I

    move-result p1

    .line 241
    iget-object v0, p0, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;->context:Landroid/app/Activity;

    const-string v1, "R.id.privacypolicy_ok"

    invoke-static {v0, v1}, Lcom/bianfeng/addpermission/common/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v0

    const/4 v1, 0x0

    if-ne p1, v0, :cond_0

    const/4 p1, 0x1

    :try_start_0
    const-string v0, "com.bianfeng.seppellita.SepperllitaInterface"

    .line 243
    invoke-static {v0}, Ljava/lang/Class;->forName(Ljava/lang/String;)Ljava/lang/Class;

    move-result-object v0

    const-string v2, "postYmnId"

    new-array v3, p1, [Ljava/lang/Class;

    .line 245
    const-class v4, Landroid/content/Context;

    aput-object v4, v3, v1

    invoke-virtual {v0, v2, v3}, Ljava/lang/Class;->getMethod(Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;

    move-result-object v2

    .line 246
    invoke-virtual {v0}, Ljava/lang/Class;->newInstance()Ljava/lang/Object;

    move-result-object v0

    new-array v3, p1, [Ljava/lang/Object;

    .line 247
    iget-object v4, p0, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;->context:Landroid/app/Activity;

    aput-object v4, v3, v1

    invoke-virtual {v2, v0, v3}, Ljava/lang/reflect/Method;->invoke(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;
    :try_end_0
    .catch Ljava/lang/Exception; {:try_start_0 .. :try_end_0} :catch_0

    goto :goto_0

    :catch_0
    move-exception v0

    .line 250
    invoke-virtual {v0}, Ljava/lang/Exception;->printStackTrace()V

    .line 252
    :goto_0
    invoke-virtual {p0}, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;->dismiss()V

    .line 253
    iget-object v0, p0, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;->context:Landroid/app/Activity;

    invoke-static {v0}, Lcom/bianfeng/addpermission/common/SharedPreferencesUtils;->getInstance(Landroid/content/Context;)Lcom/bianfeng/addpermission/common/SharedPreferencesUtils;

    move-result-object v0

    invoke-virtual {v0, p1}, Lcom/bianfeng/addpermission/common/SharedPreferencesUtils;->setAgreePolicy(Z)V

    .line 254
    invoke-static {}, Lcom/bianfeng/addpermission/ui/AddPermissionApi;->getPolicyCallBack()Lcom/bianfeng/addpermission/ui/AddPrivacyPolicyCallBack;

    move-result-object p1

    invoke-interface {p1}, Lcom/bianfeng/addpermission/ui/AddPrivacyPolicyCallBack;->onAllow()V

    goto :goto_1

    .line 255
    :cond_0
    iget-object v0, p0, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;->context:Landroid/app/Activity;

    const-string v2, "R.id.privacypolicy_refuse"

    invoke-static {v0, v2}, Lcom/bianfeng/addpermission/common/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result v0

    if-ne p1, v0, :cond_1

    .line 256
    invoke-virtual {p0}, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;->dismiss()V

    .line 257
    invoke-static {v1}, Ljava/lang/System;->exit(I)V

    :cond_1
    :goto_1
    return-void
.end method

.method protected onCreate(Landroid/os/Bundle;)V
    .locals 7

    .line 72
    invoke-super {p0, p1}, Landroid/app/Dialog;->onCreate(Landroid/os/Bundle;)V

    .line 73
    invoke-virtual {p0}, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;->getWindow()Landroid/view/Window;

    move-result-object p1

    .line 74
    invoke-virtual {p1}, Landroid/view/Window;->getAttributes()Landroid/view/WindowManager$LayoutParams;

    move-result-object v0

    .line 75
    iget-object v1, p0, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;->context:Landroid/app/Activity;

    invoke-virtual {v1}, Landroid/app/Activity;->getResources()Landroid/content/res/Resources;

    move-result-object v1

    invoke-virtual {v1}, Landroid/content/res/Resources;->getDisplayMetrics()Landroid/util/DisplayMetrics;

    move-result-object v1

    const/4 v2, 0x0

    .line 76
    invoke-virtual {p0, v2}, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;->setCancelable(Z)V

    .line 77
    iget v3, v1, Landroid/util/DisplayMetrics;->heightPixels:I

    .line 78
    iget v1, v1, Landroid/util/DisplayMetrics;->widthPixels:I

    .line 79
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v5, "ShowPrivacyPolicyDialog onCreate:heightPixels--- "

    invoke-virtual {v4, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 80
    new-instance v4, Ljava/lang/StringBuilder;

    invoke-direct {v4}, Ljava/lang/StringBuilder;-><init>()V

    const-string v6, "ShowPrivacyPolicyDialog onCreate:widthPixels--- "

    invoke-virtual {v4, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v4, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v4}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v4

    invoke-static {v4}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 81
    iget-object v4, p0, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;->context:Landroid/app/Activity;

    invoke-static {v4}, Lcom/bianfeng/addpermission/common/DensityUtils;->isPortrait(Landroid/app/Activity;)Z

    move-result v4

    if-eqz v4, :cond_0

    const-string v2, "ShowPrivacyPolicyDialog onCreate:isPortrait "

    .line 82
    invoke-static {v2}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 83
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v3}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 84
    new-instance v2, Ljava/lang/StringBuilder;

    invoke-direct {v2}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v2, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v2, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v2}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v2

    invoke-static {v2}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 85
    invoke-static {v3, v1}, Ljava/lang/Math;->max(II)I

    move-result v2

    .line 86
    invoke-static {v3, v1}, Ljava/lang/Math;->min(II)I

    move-result v1

    const/4 v3, 0x1

    .line 89
    iput v3, v0, Landroid/view/WindowManager$LayoutParams;->screenOrientation:I

    int-to-double v2, v2

    const-wide v4, 0x3fd6666666666666L    # 0.35

    mul-double v2, v2, v4

    double-to-int v2, v2

    .line 90
    iput v2, v0, Landroid/view/WindowManager$LayoutParams;->height:I

    int-to-double v1, v1

    const-wide v3, 0x3feb333333333333L    # 0.85

    mul-double v1, v1, v3

    double-to-int v1, v1

    .line 91
    iput v1, v0, Landroid/view/WindowManager$LayoutParams;->width:I

    goto :goto_0

    .line 93
    :cond_0
    invoke-static {v3, v1}, Ljava/lang/Math;->min(II)I

    move-result v4

    .line 94
    invoke-static {v3, v1}, Ljava/lang/Math;->max(II)I

    move-result v1

    const-string v3, "ShowPrivacyPolicyDialog onCreate:islan "

    .line 97
    invoke-static {v3}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 98
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v5}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v4}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    .line 99
    new-instance v3, Ljava/lang/StringBuilder;

    invoke-direct {v3}, Ljava/lang/StringBuilder;-><init>()V

    invoke-virtual {v3, v6}, Ljava/lang/StringBuilder;->append(Ljava/lang/String;)Ljava/lang/StringBuilder;

    invoke-virtual {v3, v1}, Ljava/lang/StringBuilder;->append(I)Ljava/lang/StringBuilder;

    invoke-virtual {v3}, Ljava/lang/StringBuilder;->toString()Ljava/lang/String;

    move-result-object v3

    invoke-static {v3}, Lcom/bianfeng/ymnsdk/util/Logger;->i(Ljava/lang/String;)I

    int-to-double v3, v4

    const-wide v5, 0x3febd70a3d70a3d7L    # 0.87

    mul-double v3, v3, v5

    double-to-int v3, v3

    .line 100
    iput v3, v0, Landroid/view/WindowManager$LayoutParams;->height:I

    int-to-double v3, v1

    const-wide v5, 0x3fe51eb851eb851fL    # 0.66

    mul-double v3, v3, v5

    double-to-int v1, v3

    .line 101
    iput v1, v0, Landroid/view/WindowManager$LayoutParams;->width:I

    .line 102
    iput v2, v0, Landroid/view/WindowManager$LayoutParams;->screenOrientation:I

    .line 104
    :goto_0
    invoke-virtual {p1, v0}, Landroid/view/Window;->setAttributes(Landroid/view/WindowManager$LayoutParams;)V

    .line 105
    iget-object p1, p0, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;->context:Landroid/app/Activity;

    const-string v0, "R.id.show_policy_bg_rl"

    invoke-static {p1, v0}, Lcom/bianfeng/addpermission/common/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/RelativeLayout;

    iput-object p1, p0, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;->show_policy_bg_rl:Landroid/widget/RelativeLayout;

    .line 106
    iget-object p1, p0, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;->context:Landroid/app/Activity;

    const-string v0, "R.id.show_policy_title_tv"

    invoke-static {p1, v0}, Lcom/bianfeng/addpermission/common/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/TextView;

    iput-object p1, p0, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;->title_tv:Landroid/widget/TextView;

    .line 107
    iget-object p1, p0, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;->context:Landroid/app/Activity;

    const-string v0, "R.id.privacypolicy_ok"

    invoke-static {p1, v0}, Lcom/bianfeng/addpermission/common/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/Button;

    iput-object p1, p0, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;->ok_btn:Landroid/widget/Button;

    .line 108
    iget-object p1, p0, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;->context:Landroid/app/Activity;

    const-string v0, "R.id.privacypolicy_refuse"

    invoke-static {p1, v0}, Lcom/bianfeng/addpermission/common/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/Button;

    iput-object p1, p0, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;->cancel_btn:Landroid/widget/Button;

    .line 109
    iget-object p1, p0, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;->context:Landroid/app/Activity;

    const-string v0, "R.id.show_policy_content"

    invoke-static {p1, v0}, Lcom/bianfeng/addpermission/common/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/TextView;

    iput-object p1, p0, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;->content_tv:Landroid/widget/TextView;

    .line 110
    iget-object p1, p0, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;->context:Landroid/app/Activity;

    const-string v0, "R.id.show_policy_tv"

    invoke-static {p1, v0}, Lcom/bianfeng/addpermission/common/ResourceManger;->getId(Landroid/content/Context;Ljava/lang/String;)I

    move-result p1

    invoke-virtual {p0, p1}, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;->findViewById(I)Landroid/view/View;

    move-result-object p1

    check-cast p1, Landroid/widget/TextView;

    iput-object p1, p0, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;->check_policy_tv:Landroid/widget/TextView;

    .line 111
    iget-object p1, p0, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;->ok_btn:Landroid/widget/Button;

    invoke-virtual {p1, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    .line 112
    iget-object p1, p0, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;->cancel_btn:Landroid/widget/Button;

    invoke-virtual {p1, p0}, Landroid/widget/Button;->setOnClickListener(Landroid/view/View$OnClickListener;)V

    const-wide/16 v0, 0x0

    .line 113
    iput-wide v0, p0, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;->lastClickTime:J

    .line 114
    invoke-direct {p0}, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;->initdata()V

    .line 115
    invoke-direct {p0}, Lcom/bianfeng/addpermission/ui/ShowPrivacyPolicyDialog;->initTheme()V

    return-void
.end method
