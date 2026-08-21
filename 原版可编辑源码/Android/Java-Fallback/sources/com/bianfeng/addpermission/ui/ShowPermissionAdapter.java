package com.bianfeng.addpermission.ui;

public class ShowPermissionAdapter extends android.support.v7.widget.RecyclerView.Adapter<com.bianfeng.addpermission.ui.ShowPermissionAdapter.ItemViewHolder> {
    private android.content.Context context;
    private java.util.List<com.bianfeng.addpermission.ui.PermissionBean> data;


    public static class ItemViewHolder extends android.support.v7.widget.RecyclerView.ViewHolder {
        private android.widget.ImageView imageView;
        private android.widget.TextView name;
        private android.widget.TextView notity;

        public ItemViewHolder(android.view.View r3) {
                r2 = this;
                r2.<init>(r3)
                android.content.Context r0 = r3.getContext()
                java.lang.String r1 = "R.id.adapter_show_permission_check"
                int r0 = com.bianfeng.addpermission.common.ResourceManger.getId(r0, r1)
                android.view.View r0 = r3.findViewById(r0)
                android.widget.ImageView r0 = (android.widget.ImageView) r0
                r2.imageView = r0
                android.content.Context r0 = r3.getContext()
                java.lang.String r1 = "R.id.adapter_show_permission_name"
                int r0 = com.bianfeng.addpermission.common.ResourceManger.getId(r0, r1)
                android.view.View r0 = r3.findViewById(r0)
                android.widget.TextView r0 = (android.widget.TextView) r0
                r2.name = r0
                android.content.Context r0 = r3.getContext()
                java.lang.String r1 = "R.id.adapter_show_permission_notity"
                int r0 = com.bianfeng.addpermission.common.ResourceManger.getId(r0, r1)
                android.view.View r3 = r3.findViewById(r0)
                android.widget.TextView r3 = (android.widget.TextView) r3
                r2.notity = r3
                return
        }

        static android.widget.TextView access$000(com.bianfeng.addpermission.ui.ShowPermissionAdapter.ItemViewHolder r0) {
                android.widget.TextView r0 = r0.name
                return r0
        }

        static android.widget.TextView access$100(com.bianfeng.addpermission.ui.ShowPermissionAdapter.ItemViewHolder r0) {
                android.widget.TextView r0 = r0.notity
                return r0
        }

        static android.widget.ImageView access$200(com.bianfeng.addpermission.ui.ShowPermissionAdapter.ItemViewHolder r0) {
                android.widget.ImageView r0 = r0.imageView
                return r0
        }
    }

    public ShowPermissionAdapter(java.util.List<com.bianfeng.addpermission.ui.PermissionBean> r1, android.content.Context r2) {
            r0 = this;
            r0.<init>()
            r0.data = r1
            r0.context = r2
            return
    }

    static android.content.Context access$300(com.bianfeng.addpermission.ui.ShowPermissionAdapter r0) {
            android.content.Context r0 = r0.context
            return r0
    }

    @Override
    public int getItemCount() {
            r1 = this;
            java.util.List<com.bianfeng.addpermission.ui.PermissionBean> r0 = r1.data
            int r0 = r0.size()
            return r0
    }

    @Override
    public void onBindViewHolder(android.support.v7.widget.RecyclerView.ViewHolder r1, int r2) {
            r0 = this;
            com.bianfeng.addpermission.ui.ShowPermissionAdapter$ItemViewHolder r1 = (com.bianfeng.addpermission.ui.ShowPermissionAdapter.ItemViewHolder) r1
            r0.onBindViewHolder(r1, r2)
            return
    }

    public void onBindViewHolder(com.bianfeng.addpermission.ui.ShowPermissionAdapter.ItemViewHolder r5, int r6) {
            r4 = this;
            java.util.List<com.bianfeng.addpermission.ui.PermissionBean> r0 = r4.data
            java.lang.Object r6 = r0.get(r6)
            com.bianfeng.addpermission.ui.PermissionBean r6 = (com.bianfeng.addpermission.ui.PermissionBean) r6
            android.widget.TextView r0 = com.bianfeng.addpermission.ui.ShowPermissionAdapter.ItemViewHolder.access$000(r5)
            java.lang.String r1 = r6.getName()
            r0.setText(r1)
            android.widget.TextView r0 = com.bianfeng.addpermission.ui.ShowPermissionAdapter.ItemViewHolder.access$100(r5)
            java.lang.String r1 = r6.getNotity()
            r0.setText(r1)
            java.lang.String r0 = r6.getIsok()
            java.lang.String r1 = "1"
            boolean r1 = r1.equals(r0)
            if (r1 == 0) goto L3a
            android.widget.ImageView r1 = com.bianfeng.addpermission.ui.ShowPermissionAdapter.ItemViewHolder.access$200(r5)
            android.content.Context r2 = r4.context
            java.lang.String r3 = "R.drawable.show_permission_close"
            int r2 = com.bianfeng.addpermission.common.ResourceManger.getId(r2, r3)
            r1.setImageResource(r2)
            goto L5b
        L3a:
            java.lang.String r1 = "0"
            boolean r1 = r1.equals(r0)
            if (r1 == 0) goto L52
            android.widget.ImageView r1 = com.bianfeng.addpermission.ui.ShowPermissionAdapter.ItemViewHolder.access$200(r5)
            android.content.Context r2 = r4.context
            java.lang.String r3 = "R.drawable.show_permission_open"
            int r2 = com.bianfeng.addpermission.common.ResourceManger.getId(r2, r3)
            r1.setImageResource(r2)
            goto L5b
        L52:
            android.widget.ImageView r1 = com.bianfeng.addpermission.ui.ShowPermissionAdapter.ItemViewHolder.access$200(r5)
            r2 = 8
            r1.setVisibility(r2)
        L5b:
            android.widget.ImageView r1 = com.bianfeng.addpermission.ui.ShowPermissionAdapter.ItemViewHolder.access$200(r5)
            com.bianfeng.addpermission.ui.ShowPermissionAdapter$1 r2 = new com.bianfeng.addpermission.ui.ShowPermissionAdapter$1
            r2.<init>(r4, r0, r6, r5)
            r1.setOnClickListener(r2)
            return
    }

    @Override
    public android.support.v7.widget.RecyclerView.ViewHolder onCreateViewHolder(android.view.ViewGroup r1, int r2) {
            r0 = this;
            com.bianfeng.addpermission.ui.ShowPermissionAdapter$ItemViewHolder r1 = r0.onCreateViewHolder(r1, r2)
            return r1
    }

    @Override
    public com.bianfeng.addpermission.ui.ShowPermissionAdapter.ItemViewHolder onCreateViewHolder(android.view.ViewGroup r3, int r4) {
            r2 = this;
            android.content.Context r4 = r3.getContext()
            android.view.LayoutInflater r4 = android.view.LayoutInflater.from(r4)
            android.content.Context r0 = r3.getContext()
            java.lang.String r1 = "R.layout.adapter_show_permission_list"
            int r0 = com.bianfeng.addpermission.common.ResourceManger.getId(r0, r1)
            r1 = 0
            android.view.View r3 = r4.inflate(r0, r3, r1)
            com.bianfeng.addpermission.ui.ShowPermissionAdapter$ItemViewHolder r4 = new com.bianfeng.addpermission.ui.ShowPermissionAdapter$ItemViewHolder
            r4.<init>(r3)
            return r4
    }
}
